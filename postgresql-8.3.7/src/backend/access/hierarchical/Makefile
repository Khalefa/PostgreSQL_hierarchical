#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for access/hierarchical
#
# IDENTIFICATION
#    $PostgreSQL: pgsql/src/backend/access/hierarchical/Makefile,v 1.13 2015/08/26 17:16:10 petere Exp $
#
#-------------------------------------------------------------------------

subdir = src/backend/access/hierarchical
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = hierarchical.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

clean: 
	rm -f SUBSYS.o $(OBJS)
