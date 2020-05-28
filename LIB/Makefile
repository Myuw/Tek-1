##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

##################################################
#                  INCLUDE .MK                   #
##################################################

##lib
include lib/my/makelib.mk

##tests
include tests/maketest.mk

##sources
include src/src.mk

##bash colors and formatting text
include include/bash_colors_and_formatting.mk

##################################################
#                IMPLICITES RULES                #
##################################################

CC			=	gcc

##Clean file
RM			=	rm -rf

##################################################
#                PROCESSING FLAGS                #
##################################################

##More warning
CFLAGS		+=	-Wall -Wextra

##################################################
#              PREPROCESSING FLAGS               #
##################################################

CPPFLAGS	+=	-Iinclude/

##################################################
#                   LIB FLAGS                    #
##################################################

LDLIB		+=	-lmy

LDFLAGS		+=	-Llib/

##################################################
#              NAME OF THE PROJECT               #
##################################################

##binary project
output		=	##binary

##################################################
#                   ALL RULE                     #
##################################################

all:	lib $(output)

$(output):	$(objects)	$(mainobject)
	@echo -e "$(RESET_ALL)[i] $(LIGHT_GREEN)Compiled lib object files$(RESET_ALL)"
	@echo -ne "$(RESET_ALL)[i]$(LIGHT_YELLOW) $(RESET_ALL)"
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDLIB) $(LDFLAGS) -o $(output) $(objects) $(mainobject)
	@echo -e "$(RESET_ALL)[i] $(LIGHT_GREEN)Linked object files$(RESET_ALL)"
	@echo -e "\n$(RESET_ALL)############################$(LIGHT_BLUE) COMPILATION DONE $(RESET_ALL)############################"

##################################################
#                   DEBUG RULE                   #
##################################################

##Debug with valgrind or gdb
debug:	CFLAGS += -g3 -ggdb
debug:	re

##################################################
#                 CLEANING RULES                 #
##################################################

##Clean objects files
clean:
	@$(RM) $(objects)
	@$(RM) $(libobjects)
	@$(RM) $(testobjects)
	@$(RM) $(mainobject)
	@echo -e "$(RESET_ALL)[!] $(LIGHT_RED)Cleaned objects$(RESET_ALL)     [!]"

##Clean tests files
testclean:
	@$(RM) *.gcno
	@$(RM) *.gcda
	@$(RM) lib/my/*.gcno
	@$(RM) lib/my/*.gcda
	@$(RM) tests/*.gcno
	@$(RM) tests/*.gcda
	@$(RM) src/*.gcno
	@$(RM) src/*.gcda
	@echo -e "$(RESET_ALL)[!] $(LIGHT_RED)Cleaned tests files$(RESET_ALL) [!]"

##Clean binary
fclean:	clean	testclean
	@$(RM) $(output)
	@$(RM) $(liboutput)
	@$(RM) $(testoutput)
	@$(RM) lib/libmy.a
	@echo -e "$(RESET_ALL)[!] $(LIGHT_RED)Cleaned outputs$(RESET_ALL)     [!]"


##################################################
#                    RE RULE                     #
##################################################

re:	fclean all

##################################################
#                  .PHONY RULE                   #
##################################################

##Protect rules
.PHONY:	all clean testclean fclean re debug