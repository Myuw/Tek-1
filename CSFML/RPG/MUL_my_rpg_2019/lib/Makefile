##
## EPITECH PROJECT, 2020
## lib
## File description:
## lib
##

NAME	=	libmy.a

SRC	=	src/my_strlen.o 	\
		src/my_putstr_2.o 	\
		src/my_put_nbr.o 	\
		src/my_atoi.o 		\
		src/my_str_copy.o 	\
		src/my_strcmp.o 	\
		src/free_array.o

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):	$(SRC)
			ar rc $(NAME) $(SRC)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
