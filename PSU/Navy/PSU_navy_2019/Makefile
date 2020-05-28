##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Test base makefile for every projects
##

.SILENT:

#QUICKSTART GUIDE:########################################################################
#Objects variable contain .o file and output variable contains the output name we want\  #
#therefore, liboutput is 'libmy.a' and libobjects features 'lib/my_putchar.o'\           #
#Those objects are contained within lib.mk, test.mk and src.mk respectively for\         #
#modularity purposes.                                                                    #
##########################################################################################

#INCLUDES : include the sources you need
##########################################################################################

include src/src.mk
include lib/lib.mk
include tests/test.mk

##########################################################################################

#COMPILATION OPTIONS : add flags or change compiler
##########################################################################################

CC	=	gcc

#Note that the --coverage flag will be added only for testing and -ggdb for debuging
CFLAGS	+=	-Wall		\
		-Wextra		\
		-Iinclude/

LDFLAGS	+=	-Llib/

LDLIBS	+=	-lmy

#TEST ARGUMENTS: arguments used for tests with gdb and valgrind
##########################################################################################

test_args	+=	maps/boat_1.txt

#IMPLICIT RULES
##########################################################################################

%.o:	%.c
	@$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@
	@echo -e "\e[0mCompilation $@:\e[92mOK\e[0m"

##########################################################################################

all:	$(srcoutput)

#EQUIVALENT TO THE $(NAME) RULE
##########################################################################################

$(srcoutput):	lib	$(srcobjects)	$(srcmain)
	@$(CC) $(CFLAGS) -o $(srcoutput) $(srcmain) $(srcobjects) $(LDFLAGS) $(LDLIBS)
	@echo -e "\e[0mLinking sources:\e[92mOK\e[0m"

##########################################################################################

lib:	$(libobjects)
	@ar rc $(liboutput) $(libobjects)
	@echo -e "\e[0mLinking lib:\e[92mOK\e[0m"
	@-mkdir include
	@cp lib/my.h include/

##########################################################################################

tests_run:	CFLAGS += --coverage
tests_run:	tests_clean	lib	$(srcobjects)	$(testobjects)
	@$(CC) --coverage -o $(testoutput) $(srcobjects) $(testobjects) $(LDFLAGS) $(LDLIBS) -lcriterion
	@echo -e "\e[0mLinking tests:\e[92mOK\e[0m"
	@-./$(testoutput)
	@gcovr lib/
	@gcovr src/

##########################################################################################

gdb:	CFLAGS += -ggdb
gdb:	re
	@gdb --args ./$(srcoutput) $(test_args)

#########################################################################################

valgrind:	CFLAGS += -g3
valgrind:	re
	@valgrind --tool=memcheck --leak-check=full ./$(srcoutput) $(test_args)

##########################################################################################

fclean:	clean
	@rm -rf $(srcoutput) $(liboutput) $(testoutput)
	@echo -e "\e[91mRemoving all non-source files:\e[0mOK"

##########################################################################################

profile:	CFLAGS += -pg -g
profile:	re
	@./$(srcoutput)
	@gprof -b -p $(srcoutput)
	@rm -f gmon.out

##########################################################################################

tests_clean:
	@rm -rf lib/*.gcno lib/*.gcda
	@rm -rf tests/*.gcno tests/*.gcda
	@rm -rf src/*.gcno src/*.gcda
	@echo -e "\e[91mRemoving temporary test files:\e[0mOK"

##########################################################################################

clean:	tests_clean
	@rm -rf $(srcobjects) $(srcmain) $(libobjects) $(testobjects)
	@echo -e "\e[91mRemoving all intermediate and temporary files:\e[0mOK"

##########################################################################################

re:	fclean	lib	all

#CONVENTIONAL VARIABLES : do not change
##########################################################################################

SHELL	=	/bin/sh

.PHONY:	all	source	lib	tests_run	tests_clean	debug	fclean	clean	re	profile	valgrind

.SUFFIXES:
.SUFFIXES: .c .o

##########################################################################################
