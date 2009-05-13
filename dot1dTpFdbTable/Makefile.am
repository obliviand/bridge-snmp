noinst_LIBRARIES = libdot1dTpFdbTable.a
libdot1dTpFdbTable_a_SOURCES = \
				dot1dTpFdbTable_interface.c \
				dot1dTpFdbTable.c \
				dot1dTpFdbTable_data_access.c \
				dot1dTpFdbTable_data_get.c \
				dot1dTpFdbTable_data_set.c

nodist_libdot1dTpFdbTable_a_SOURCES = dot1dTpFdbTable_interface.c

libdot1dTpFdbTable_a_CFLAGS = -I$(top_srcdir)/include

CLEANFILES = dot1dTpFdbTable_interface.c dot1dTpFdbTable_interface.h

dot1dTpFdbTable_interface.c:
	env MIBS="@MIBS@" \
	mib2c -I defaults -c mfd-interface.m2c dot1dTpFdbTable
