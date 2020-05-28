##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

.PHONY:	all clean fclean re

CC			=	gcc

CFLAGS		+=	-Wall -Wextra

CPPFLAGS	+=	-I include/

CSFMLFLAGS	+=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

LIBFLAGS	+=	-Llib/ -lmy

output		=	my_defender

objects		=	src/main_menu.o			\
				src/game.o 				\
				src/my_click.o 			\
				src/ennemis.o 			\
				src/tower.o 			\
				src/analyse_event.o 	\
				src/pause_menu.o 		\
				src/main_menu_music.o 	\
				src/in_game_music.o 	\
				src/draw_white_button.o \
				src/print_text.o

mainobject	=	src/main.o

all:	lib	$(output)

$(output):	$(objects)	$(mainobject)
	@echo -e "\e[0m[!] \e[92mCompiled object files\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	$(CC) $(CFLAGS) $(CPPFLAGS) $(CSFMLFLAGS) -o $(output) $(mainobject) $(objects) $(LIBFLAGS)
	@echo -e "\e[0m[i] \e[92mLinked object files\e[0m"

debug:	CFLAGS += -g3 -ggdb
debug:	re

clean:
	@rm -rf $(objects)
	@rm -rf $(libobjects)
	@rm -rf $(testobjects)
	@rm -rf $(mainobject)
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned objects\e[0m"

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
	@rm -rf $(output)
	@rm -rf $(liboutput)
	@rm -rf $(testoutput)
	@rm -rf lib/libmy.a
	@echo -e "\e[0m[i] \e[31m\e[5mCleaned outputs\e[0m"

re:	fclean all

include lib/my/makelib.mk
include test/maketest.mk
