##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

LSRC		=	my_atoi.o		\
				my_itoa.o		\
				my_putchar.o	\
				my_puterror.o	\
				my_putnbr.o		\
				my_putstr.o		\
				my_strcmp.o		\
				my_strdup.o		\
				my_strlen.o		\
				my_stwa.o		\

LNAME		=	libmy.a

all			:	$(LNAME)

$(LNAME)	:	$(LSRC)
				ar rc $(LNAME) $(LSRC)
				cp $(LNAME) ..
				cp libmy.h ../../include

clean		:
				$(RM) $(LSRC)

fclean		:	clean
				$(RM) include$(LNAME)
				$(RM) ../$(LNAME)
				echo -e "[!] \e[31mCleaned lib object\e[0m [!]"
				echo -e "[!] \e[31mCleaned libmy\e[0m [!]"

re			:	fclean all

.PHONY		:	all clean fclean re
