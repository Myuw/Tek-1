##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

.PHONY:	all clean fclean re

CC		=	gcc

CFLAGS		+=	-Wall -Wextra -Iinclude/

LIBFLAGS	+=	-Llib/ -lmy

output		=	matchstick

objects		=	src/my_alloc.o		\
			src/print_map.o		\
			src/fill_tab.o		\
			src/print_board.o	\
			src/game.o		\
			src/get_input.o		\
			src/check_input.o	\
			src/check_line.o	\
			src/get_max_matches.o	\
			src/manage_board.o	\
			src/ia_matchstick.o	\
			src/player_turn.o	\
			src/my_free.o		\

mainobject	=	src/main.o		\

all:	lib	$(output)

$(output):	$(objects)	$(mainobject)	include/my.h include/matchstick.h
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
	@rm -rf $(bonusoutput)
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned outputs\e[0m"

testclean:
	@rm -rf lib/my/*.gcno
	@rm -rf lib/my/*.gcda
	@rm -rf tests/*.gcno
	@rm -rf tests/*.gcda
	@rm -rf src/*.gcno
	@rm -rf src/*.gcda
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned test files\e[0m"

bonusclean:
	@rm -rf bonus/*.o
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned bonus files\e[0m"

fclean:	clean	testclean	bonusclean
	@rm -rf $(objects)
	@rm -rf $(libobjects)
	@rm -rf $(testobjects)
	@rm -rf $(bonusobjects)
	@rm -rf $(mainobject)
	@rm -rf lib/libmy.a
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned objects\e[0m"

re:	fclean all

include lib/my/makelib.mk
include test/maketest.mk
include bonus/makebonus.mk
