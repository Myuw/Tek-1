#Object files containing the functions of the lib
libstrdobjects	=	libstrd/io/my_putchar.o						\
					libstrd/io/my_putint.o						\
					libstrd/io/my_putstr.o						\
					libstrd/io/my_puterr.o						\
					libstrd/strings/my_revstr.o					\
					libstrd/strings/my_strcmp.o					\
					libstrd/strings/my_strcpy.o					\
					libstrd/strings/my_strncmp.o				\
					libstrd/strings/my_strlen.o					\
					libstrd/strings/my_str_to_word_array.o		\
					libstrd/strings/my_strcat.o					\
					libstrd/convert/my_stoi.o					\
					libstrd/convert/my_itos.o

#The lib binary it will pruduce
libstrdoutput	=	libstrd/libstrd.a
