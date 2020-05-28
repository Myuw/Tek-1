##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC			=	src/get_input.o			\
				src/main.o				\
				src/error_handling.o 	\
				src/my_str_is_letter.o 	\

NAME		=	lem_in

CFLAGS		=	-Wextra -Wall -Werror

CPPFLAGS	=	-Iinclude

LDFLAGS		=	-L lib/

LDLIBS		=	-lmy -llist

all			:	$(NAME)

$(LDLIBS)	:
				make -C lib/my
				make -C lib/list

$(NAME)		:	$(LDLIBS) $(SRC)
				echo -e "[i] \e[34mCreate lib\e[0m [i]"
				echo -e "[i] \e[34mCompile objects\e[0m [i]"
				$(CC) -o $(NAME) $(SRC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $(LDLIBS)
				echo -e "\n################\e[92m COMPILATION DONE \e[0m################"

debug		:	CFLAGS += -g3 -ggdb
debug		:	re

clean		:
				$(RM) $(SRC)
				$(RM) $(testobjects)
				make clean -C lib/my
				make clean -C lib/list
				echo -e "[!] \e[31mCleaned object\e[0m [!]"

testclean	:
			rm -rf *.gcno
			rm -rf *.gcda
			rm -rf tests/*.gcno
			rm -rf tests/*.gcda
			rm -rf src/*.gcno
			rm -rf src/*.gcda
			echo -e "\e[0m[i] \e[31mCleaned test files\e[0m [!]"


fclean		:	clean testclean
				$(RM) $(NAME)
				$(RM) $(testoutput)
				make fclean -C lib/my
				make fclean -C lib/list
				$(RM) include/libmy.h
				$(RM) lib/my/libmy.a
				echo -e "[!] \e[31mCleaned binary\e[0m [!]"

re			:	fclean all

.PHONY		:	all debug clean fclean re

.SILENT		:

include tests/unit_tests/maketest.mk
