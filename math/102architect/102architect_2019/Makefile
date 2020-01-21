##
## EPITECH PROJECT, 2019
## 102arch Make
## File description:
## a makefile
##

CC	=	gcc

CFLAGS	=	-Iinclude/

CFLAGS +=	-ggdb

LDLIBS	=	-lm

srcobjects	=	src/main.o				\
				src/transformation.o	\
				src/process_matrices.o	\
				src/matrix_toolbox.o	\
				src/error_handling.o	\
			src/check_av_3.o		\
			src/check_args.o		\

srcoutput	=	102architect

all:	source

source:	$(srcobjects)
	gcc -o $(srcoutput) $(srcobjects) $(CFLAGS) $(LDLIBS) $(CFLAGS)

fclean:	clean
	rm -f $(srcobjects)

clean:
	rm -f $(srcoutput)

re:	fclean	all
