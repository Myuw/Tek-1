##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Test Modular Makefile 1
##

.SUFFIXES:	.c	.o

.PHONY:	all clean fclean re

all:	lib	$(output)

$(output):
	@echo -e "\e[0m[!] \e[92mCompiled object files\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	@echo -e "\e[0m[i] \e[92mLinked object files\e[0m"

clean:
	@rm -rf $(output)
	@rm -rf $(liboutput)
	@rm -rf $(testoutput)
	@echo -e "\e[0m[i] \e[92mCleaned outputs\e[0m"

testclean:
	@rm -rf *.gcno
	@rm -rf *.gcda
	@echo -e "\e[0m[i] \e[92mCleaned test files\e[0m"

fclean:	clean	testclean
	@rm -rf $(objects)
	@rm -rf $(libobjects)
	@rm -rf $(testobjects)
	@rm -rf lib/libmy.a
	@echo -e "\e[0m[i] \e[92mCleaned objects\e[0m"

re:	fclean all

include lib/my/makelib.mk
include tests/maketest.mk
