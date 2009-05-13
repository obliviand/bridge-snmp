bin_PROGRAMS = bridge-snmp
bridge_snmp_SOURCES = bridge-snmp.c ctl_cli_wrap.c ctl_socket_client.c dot1dBridge.c

bridge_snmp_CFLAGS = -I$(top_srcdir)/include -Os -D__LINUX__ -Ulinux -Dlinux=linux
bridge_snmp_LDFLAGS = @LIBS@ @SYSFS_LIBS@ @NETSNMP_LIBS@ @NETSNMP_MIB_LIBS@
bridge_snmp_LDADD = @DOT1D_LIBS@

bridge_snmp_DEPENDENCIES = @DOT1D_LIBS@
