noinst_LIBRARIES = libdot1dTpPortTable.a
libdot1dTpPortTable_a_SOURCES = \
				dot1dTpPortTable_interface.c \
				dot1dTpPortTable.c \
				dot1dTpPortTable_data_access.c \
				dot1dTpPortTable_data_get.c \
				dot1dTpPortTable_data_set.c

nodist_libdot1dTpPortTable_a_SOURCES = dot1dTpPortTable_interface.c

libdot1dTpPortTable_a_CFLAGS = -I$(top_srcdir)/include

CLEANFILES = dot1dTpPortTable_interface.c dot1dTpPortTable_interface.h

dot1dTpPortTable_interface.c:
	env MIBS="@MIBS@" \
	mib2c -I defaults -c mfd-interface.m2c dot1dTpPortTable
