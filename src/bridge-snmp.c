#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include <signal.h>

#include <dot1dBridge.h>

static int keep_running;
char *bridge_name;

RETSIGTYPE stop_server(int a)
{
	keep_running = 0;
}

int main(int argc, char **argv)
{
	int agentx_subagent=1; /* change this if you want to be a SNMP master agent */
	int background = 0; /* change this if you want to run in the background */
	int syslog = 0; /* change this if you want to use syslog */

	if(argc != 2) {
		fprintf(stderr, "Please specifiy the bridge to start the agent on\n");
		return 1;
	}
	bridge_name = (char *)malloc(strlen(argv[1]) + 1);
	strcpy(bridge_name, argv[1]);
	
	/* print log errors to syslog or stderr */
	if (syslog)
		snmp_enable_calllog();
	else
		snmp_enable_stderrlog();

	/* we're an agentx subagent? */
	if (agentx_subagent) {
		/* make us a agentx client. */
		netsnmp_ds_set_boolean(NETSNMP_DS_APPLICATION_ID,
				NETSNMP_DS_AGENT_ROLE, 1);
	}

	/* run in background, if requested */
	if (background && netsnmp_daemonize(1, !syslog))
		exit(1);

	/* initialize tcpip, if necessary */
	SOCK_STARTUP;
	
	/* initialize rstp client socket */
	if (ctl_client_init()) {
		fprintf(stderr, "can't setup control connection\n");
		return 1;
	}

	/* initialize the agent library */
	init_agent("example-demon");

	/* initialize mib code here */

	init_dot1dBridge();
	init_dot1dTpFdbTable();
	init_dot1dTpPortTable();
	init_dot1dStpPortTable();
	init_dot1dBasePortTable();
	init_dot1dStpExtPortTable();

	/* initialize vacm/usm access control  */
	if (!agentx_subagent) {
		init_vacm_vars();
		init_usmUser();
	}

	/* example-demon will be used to read example-demon.conf files. */
	init_snmp("example-demon");

	/* If we're going to be a snmp master agent, initial the ports */
	if (!agentx_subagent)
		init_master_agent(); /* open the port to listen on (defaults to udp:161) */

	/* In case we recevie a request to stop (kill -TERM or kill -INT) */
	keep_running = 1;
	signal(SIGTERM, stop_server);
	signal(SIGINT, stop_server);

	snmp_log(LOG_INFO, "example-demon is up and running.\n");

	/* your main loop here... */
	while (keep_running) {
		/* if you use select(), see snmp_select_info() in snmp_api(3) */
		/*     --- OR ---  */
		agent_check_and_process(1); /* 0 == don't block */
	}

	/* at shutdown time */
	snmp_shutdown("example-demon");
	SOCK_CLEANUP;

	/* cleanup rstp client socket */
	ctl_client_cleanup();
	
	free(bridge_name);
	return 0;
}

