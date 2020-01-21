##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Test base makefile for every projects
##

#QUICKSTART GUIDE:########################################################################
#Objects variable contain .o file and output variable contains the output name we want\  #
#therefore, liboutput is 'libmy.a' and libobjects features 'lib/my_putchar.o'\           #
#Those objects are contained within lib.mk, test.mk and src.mk respectively for\         #
#modularity purposes.                                                                    #
##########################################################################################

#INCLUDES : include the sources you need
##########################################################################################

include src/src.mk
#include tests/test.mk
include lib/lib.mk

##########################################################################################

#COMPILATION OPTIONS : add flags or change compiler
##########################################################################################

CC	=	gcc

#Note that the --coverage flag will be added only for testing
CFLAGS	+=	-Wall		\
		-Wextra		\
		-Iinclude/

LDFLAGS	+=	-Llib/

LDLIBS	+=	-lmy	\
		-lm

##########################################################################################

all:	source

source:	lib	$(srcobjects)
	@echo -en "\e[93m"
	$(CC) $(CFLAGS) -o $(srcoutput) $(srcobjects) $(LDFLAGS) $(LDLIBS)
	@echo -e "\e[0m[!]\e[92mLinked sources.\e[0m"

tests:	CFLAGS += --coverage
tests:	$(objects)	$(testobjects)
	@echo -en "\e[93m"
	$(CC) --coverage -o $(testoutput) $(objects) $(testobjects) -lcriterion
	@echo -e "\e[0m[!]\e[92mLinked tests.\e[0m"
	-./$(testoutput)
	gcovr

debug:	CFLAGS += -ggdb
debug:	re	source

lib:	$(libobjects)
	@echo -en "\e[93m"
	ar rc $(liboutput) $(libobjects)
	@echo -e "\e[0m[!]\e[92mLinked lib.\e[0m"
	cp lib/my.h include/

fclean:	clean
	rm -rf $(srcobjects) $(libobjects) $(testobjects) include/my.h
	@echo -e "[i]\e[31mRemoved object files.\e[0m"

clean:
	rm -rf $(srcoutput) $(liboutput) $(testoutput)
	@echo -e "[i]\e[31mRemoved binary files.\e[0m"

re:	fclean	lib	all
