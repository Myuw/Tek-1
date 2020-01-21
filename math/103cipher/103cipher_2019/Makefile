##
## EPITECH PROJECT, 2019
## 102arch Make
## File description:
## a makefile
##

CC	=	gcc

CFLAGS	:=	-Wextra	\
			-Wall	\
			-Iinclude/

LDFLAGS	:=	-Llib/

LDLIBS	:=	-lmy

srcobjects	=	src/main.o					\
				src/load_destroy_matrix.o	\
				src/matrix_operations.o		\
				src/print_matrix.o

srcoutput	=	103cipher

libobjects	=	lib/my_putchar.o				\
				lib/my_putint.o					\
				lib/my_putstr.o					\
				lib/my_revstr.o					\
				lib/my_strcmp.o					\
				lib/my_strlen.o					\
				lib/my_printf_toolbox.o			\
				lib/my_printf.o					\
				lib/my_stoi.o					\
				lib/my_base_converter.o			\
				lib/my_itos.o					\
				lib/my_other_printf_toolbox.o	\
				lib/my_putsastr.o				\
				lib/my_another_printf_toolbox.o

liboutput	=	lib/libmy.a

all:	source

source:	lib	$(srcobjects)
	gcc -o $(srcoutput) $(srcobjects) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

lib:    $(libobjects)
	ar rc $(liboutput) $(libobjects)
	-mkdir include
	cp lib/my.h include/

fclean:	clean
	rm -f $(srcoutput)
	rm -f $(liboutput)

clean:
	rm -f $(srcobjects)
	rm -f $(libobjects)

re:	fclean	all
