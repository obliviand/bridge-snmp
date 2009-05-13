AC_INIT([bridge-snmp], [0.1])
AM_INIT_AUTOMAKE

AC_PROG_CC
AC_PROG_LD
AC_PROG_RANLIB
AM_PROG_CC_C_O

AC_CHECK_LIB([sysfs],[sysfs_open_attribute],
	[AC_SUBST([SYSFS_LIBS], ["-lsysfs"])
	 AC_DEFINE([HAVE_SYSFS], [1], [Define if you have libsysfs])
	],[ echo "libsysfs is required to build, please install it"; exit 1 ])

AC_CHECK_LIB([netsnmp],[debugmsg],
	[AC_SUBST([NETSNMP_LIBS], ["-lnetsnmp"])
	 AC_DEFINE([HAVE_NETSNMP], [1], [Define if you have netsnmp])
	],[ echo "libnetsnmp is required to build, please install it"; exit 1 ])

AC_CHECK_LIB([netsnmpmibs],[netsnmp_register_table],
	[AC_SUBST([NETSNMP_MIB_LIBS], ["-lnetsnmpmibs"])
	 AC_DEFINE([HAVE_NETSNMP_MIB], [1], [Define if you have netsnmp mibs])
	],
	[ echo "libnetsnmp is required to build, please install it"; exit 1 ],
	[ -lnetsnmpagent -lnetsnmphelpers ])

ac_dot1d_dirs="`for dir in $(ls -d ./${ac_top_srcdir}/dot1d*); do \
		echo -n \"$(basename ${dir}) \";
	     done`"

AC_SUBST([DOT1D_LIBS],
  [`for dir in ${ac_dot1d_dirs}; do \
	echo -n "\\\$(top_srcdir)/$(basename ${dir})/lib$(basename ${dir}).a "; \
   done`
  ])

AC_SUBST([MIBS],["+\$(top_srcdir)/mibs/BRIDGE-MIB.txt:\$(top_srcdir)/mibs/RSTP-MIB.txt"])

AC_CONFIG_FILES([dot1dBasePortTable/Makefile dot1dStpExtPortTable/Makefile dot1dStpPortTable/Makefile dot1dTpFdbTable/Makefile dot1dTpPortTable/Makefile src/Makefile Makefile])
AC_OUTPUT
