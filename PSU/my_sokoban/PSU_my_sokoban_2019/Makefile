##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Test Modular Makefile 1
##

.PHONY:	all clean fclean re

CC		=	gcc

CFLAGS		+=	-Iinclude/ -lncurses

LIBFLAGS	+=	-Llib/ -lmy

output		=	my_sokoban

objects		=	src/osr_file.o		\
			src/count_buffer.o	\
			src/my_alloc.o		\
			src/create_tab_char.o	\
			src/sokoban.o		\
			src/display_tab.o	\
			src/get_pos_p.o		\
			src/move_p.o		\
			src/simple_mvt.o	\
			src/complex_mvt.o	\
			src/resize_message.o	\
			src/defeat_condition.o	\

mainobject	=	src/main.o		\

all:	lib	$(output)

$(output):	$(objects)	$(mainobject)	include/my.h include/sokoban.h
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

testclean:
	@rm -rf lib/my/*.gcno
	@rm -rf lib/my/*.gcda
	@rm -rf tests/*.gcno
	@rm -rf tests/*.gcda
	@rm -rf src/*.gcno
	@rm -rf src/*.gcda
	@echo -e "\e[0m[i] \e[92mCleaned test files\e[0m"

fclean:	clean	testclean
	@rm -rf $(objects)
	@rm -rf $(libobjects)
	@rm -rf $(testobjects)
	@rm -rf $(mainobject)
	@rm -rf lib/libmy.a
	@echo -e "\e[0m[i] \e[92mCleaned objects\e[0m"

re:	fclean all

include lib/my/makelib.mk
