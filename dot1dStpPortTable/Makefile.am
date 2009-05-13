noinst_LIBRARIES = libdot1dStpPortTable.a
libdot1dStpPortTable_a_SOURCES = \
				 dot1dStpPortTable_interface.c \
				 dot1dStpPortTable.c \
				 dot1dStpPortTable_data_access.c \
				 dot1dStpPortTable_data_get.c \
				 dot1dStpPortTable_data_set.c

nodist_libdot1dStpPortTable_a_SOURCES = dot1dStpPortTable_interface.c

libdot1dStpPortTable_a_CFLAGS = -I$(top_srcdir)/include

CLEANFILES = dot1dStpPortTable_interface.c dot1dStpPortTable_interface.h

dot1dStpPortTable_interface.c:
	env MIBS="@MIBS@" \
	mib2c -I defaults -c mfd-interface.m2c dot1dStpPortTable
