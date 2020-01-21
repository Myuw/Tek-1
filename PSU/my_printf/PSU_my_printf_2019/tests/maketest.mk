testflags	=	-lcriterion --coverage

testobjects	=	tests/test_my_printf_simple_string.o		\
			tests/test_my_printf_simple_string_2.o		\
			tests/test_my_printf_simple_digits.o		\
			tests/test_my_printf_simple_digits_2.o		\
			tests/test.o					\

testoutput	=	tests_run

OBJ		=	lib/my/my_printf.c				\
			lib/my/my_putstr.c				\
			lib/my/my_putchar.c				\
			lib/my/my_put_nbr.c				\
			lib/my/my_dtoh.c				\
			lib/my/my_dtob.c				\
			lib/my/my_put_nbr_unsigned_int.c		\
			lib/my/my_dtoo.c				\
			lib/my/my_dtoh_2.c				\

tests_run:	lib	$(OBJ)	$(testobjects)
		@echo -e "\e[0m[!] \e[92mCompiled object files for unit testing\e[0m"
		@echo -ne "\e[0m[!]\e[93m"
		$(CC) $(CFLAGS) -o $(testoutput) $(OBJ) libmy.a $(testobjects) $(testflags)
		@echo -e "\e[0m[i] \e[92mLinked unit tests\e[0m"
		@echo -e "\e[0m[i] \e[92mMoved gcovr files\e[0m"
		./tests_run
		@echo -e "\e[0m[i] \e[92mRunned unit test\e[0m"
