##################################################
#                LIB OBJECTS FILES               #
##################################################

## /!\ Only .o files /!\ ##
libobjects	=	lib/my/my_putchar.o					\
				lib/my/my_put_nbr.o					\
				lib/my/my_putstr.o					\
				lib/my/my_strlen.o					\
				lib/my/my_getnbr.o					\
				lib/my/my_strcpy.o					\
				lib/my/my_revstr.o					\
				lib/my/my_strcmp.o					\
				lib/my/my_putstr.o					\
				lib/my/my_atoi.o					\
				lib/my/my_itoa.o					\
				lib/my/my_revstr.o					\
				lib/my/my_lower_str.o				\
				lib/my/my_str_is_nbr.o				\
				lib/my/my_str_is_letter.o 			\
				lib/my/my_strcat.o					\
				lib/my/my_strtab.o

##################################################
#                   LIB OUTPUT                   #
##################################################

liboutput	=	libmy.a

##################################################
#                    LIB RULE                    #
##################################################

lib:	$(libobjects)
	@echo -e "\e[0m[i] \e[92mCompiled library's object files\e[0m"
	@ar rc $(liboutput) $(libobjects)
	@echo -e "\e[0m[i] \e[92mLinked library\e[0m"
	@mv libmy.a lib/
	@echo -e "\e[0m[i] \e[92mMoved library\e[0m"
