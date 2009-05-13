noinst_LIBRARIES = libdot1dStpExtPortTable.a

libdot1dStpExtPortTable_a_SOURCES = \
				    dot1dStpExtPortTable_interface.c \
				    dot1dStpExtPortTable.c \
				    dot1dStpExtPortTable_data_access.c \
				    dot1dStpExtPortTable_data_get.c \
				    dot1dStpExtPortTable_data_set.c

nodist_libdot1dStpExtPortTable_a_SOURCES = dot1dStpExtPortTable_interface.c

libdot1dStpExtPortTable_a_CFLAGS = -I$(top_srcdir)/include

CLEANFILES = dot1dStpExtPortTable_interface.c dot1dStpExtPortTable_interface.h

dot1dStpExtPortTable_interface.c:
	env MIBS="@MIBS@" \
	mib2c -I defaults -c mfd-interface.m2c dot1dStpExtPortTable
