##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

LSRC		=	add_node.o	\
				del_node.o	\

LNAME		=	liblist.a

all			:	$(LNAME)

$(LNAME)	:	$(LSRC)
				ar rc $(LNAME) $(LSRC)
				cp $(LNAME) ..
				cp liblist.h ../../include

clean		:
				$(RM) $(LSRC)

fclean		:	clean
				$(RM) $(LNAME)
				$(RM) ../$(LNAME)
				$(RM) ../../include/liblist.h

re			:	fclean all

.PHONY		:	all clean fclean re
