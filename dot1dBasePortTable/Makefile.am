noinst_LIBRARIES = libdot1dBasePortTable.a
libdot1dBasePortTable_a_SOURCES = \
				  dot1dBasePortTable_interface.c \
				  dot1dBasePortTable.c \
				  dot1dBasePortTable_data_access.c \
				  dot1dBasePortTable_data_get.c \
				  dot1dBasePortTable_data_set.c
nodist_libdot1dBasePortTable_a_SOURCES = dot1dBasePortTable_interface.c

libdot1dBasePortTable_a_CFLAGS = -I$(top_srcdir)/include

CLEANFILES = dot1dBasePortTable_interface.c dot1dBasePortTable_interface.h

dot1dBasePortTable_interface.c:
	env MIBS="@MIBS@" \
	mib2c -I defaults -c mfd-interface.m2c dot1dBasePortTable
