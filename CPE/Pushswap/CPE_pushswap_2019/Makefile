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

output		=	push_swap

objects		=	src/create_new_link.o	\
			src/pushswap.o		\
			src/lowest_nbr.o	\
			src/biggest_nbr.o	\
			src/my_r.o		\
			src/my_p.o		\
			src/my_s.o		\
			src/my_rr.o		\
			src/check_list.o	\
			src/my_free.o		\

mainobject	=	src/main.o		\

all:	lib	$(output)

$(output):	$(objects)	$(mainobject)	include/my.h include/pushswap.h
	@echo -e "\e[0m[!] \e[92mCompiled object files\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	$(CC) $(CFLAGS) -o $(output) $(mainobject) $(objects) $(LIBFLAGS)
	@echo -e "\e[0m[!] \e[92mCOMPILATION DONE\e[0m \e[0m[!]"

debug:	CFLAGS += -g3 -ggdb
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
