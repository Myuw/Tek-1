##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

.PHONY:	all clean fclean re

CC		=	gcc

CFLAGS		+=	-Iinclude/ -lm -g

LIBFLAGS	+=	-Llib/ -lmy

output		=	104intersection

objects		=	src/print.o		\
			src/toolbox.o		\
			src/calc_intersection.o	\
			src/my_params.o		\
			src/my_delta.o		\

mainobject	=	src/main.o		\

all:	lib	$(output)

$(output):	$(objects)	$(mainobject)	include/my.h include/104intersection.h
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
