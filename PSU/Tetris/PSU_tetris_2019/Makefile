##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

.PHONY:	all clean fclean re

CC				=	gcc

CFLAGS			+=	-Wall -Wextra

CPPFLAGS		+=	-Iinclude/

LIBFLAGS		+=	-Llib/ -lmy

NCURSESFLAGS	+= -lncurses

output			=	tetris

objects			=	src/parsing.o 					\
					src/strcmp_env.o 				\
					src/strcpy_env.o 				\
					src/get_map_size.o 				\
					src/debug_mode.o 				\
					src/my_env.o  					\
					src/print_debug_mode.o 			\
					src/check_tetriminos_folder.o 	\
					src/check_tetrimino_nbr.o 		\
					src/check_tetrimino.o 			\
					src/parse_tetrimino.o 			\
					src/get_tetriminos_path.o 		\
					src/game.o

mainobject		=	src/main.o						\

all:	lib	$(output)

$(output):	$(objects)	$(mainobject)
	@echo -e "\e[0m[!] \e[92mCompiled object files\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	$(CC) $(CFLAGS) $(CPPFLAGS) $(NCURSESFLAGS) -o $(output) $(objects) $(mainobject) $(LIBFLAGS)
	@echo -e "\e[0m[i] \e[92mLinked object files\e[0m"
	@echo -e "\e[0m[i] \e[92mCOMPILATION DONE \e[0m[i]"

debug:	CFLAGS += -g3 -ggdb
debug:	re

clean:
	@rm -rf $(output)
	@rm -rf $(liboutput)
	@rm -rf $(testoutput)
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned outputs\e[0m"

testclean:
	@rm -rf lib/my/*.gcno
	@rm -rf lib/my/*.gcda
	@rm -rf *.gcno
	@rm -rf *.gcda
	@rm -rf test/*.gcno
	@rm -rf test/*.gcda
	@rm -rf src/*.gcno
	@rm -rf src/*.gcda
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned test files\e[0m"

fclean:	clean	testclean
	@rm -rf $(objects)
	@rm -rf $(libobjects)
	@rm -rf $(testobjects)
	@rm -rf $(mainobject)
	@rm -rf lib/libmy.a
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned objects\e[0m"

re:	fclean all

include lib/my/makelib.mk
include test/maketest.mk
