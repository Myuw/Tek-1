##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Test Modular Makefile 1
##

SHELL		=	/bin/bash

.SUFFIXES:	.c	.o

.PHONY:	all clean fclean testclean re

CC		=	gcc

CFLAGS		+=	-Wextra -Iinclude/

LIBFLAGS	+=	-Llib/ -lmy

output		=	bsq

objects		=	src/error_handling.o		\
			src/open_read_file.o		\
			src/nb_line_column.o		\
			src/bsq.o			\
			src/check_lowest_nbr.o		\
			src/print_tab_int.o		\
			src/print_tab_char.o		\
			src/highest_nbr.o		\
			src/my_alloc.o			\
			src/tab_int.o			\
			src/tab_char.o			\
			src/my_free.o			\

mainobject	=	src/main.o			\

all:	lib	$(output)

$(output):	$(objects)	$(mainobject)	include/my.h	include/bsq.h
	@echo -e "\e[0m[!] \e[92mCompiled object files\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	$(CC) $(CFLAGS) -o $(output) $(objects) $(mainobject) $(LIBFLAGS)
	@echo -e "\e[0m[i] \e[92mLinked object files\e[0m"

debug:	CFLAGS += -g3
debug:	re

clean:
	@rm -rf $(output)
	@rm -rf $(liboutput)
	@rm -rf $(testoutput)
	@echo -e "\e[0m[i] \e[92mCleaned outputs\e[0m"

fclean:	clean
	@rm -rf $(objects)
	@rm -rf $(libobjects)
	@rm -rf $(mainobject)
	@rm -rf lib/libmy.a
	@rm -rf tests/test*
	@rm -rf tests/echo_result
	@echo -e "\e[0m[i] \e[92mCleaned objects\e[0m"

re:	fclean all

include lib/my/makelib.mk
