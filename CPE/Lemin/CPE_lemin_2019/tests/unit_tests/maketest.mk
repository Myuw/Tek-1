testflags	=	-lcriterion --coverage

testobjects	=	tests/unit_tests/my_str_had_dash_tests.o		\
			tests/unit_tests/my_str_is_letter_tests.o
testoutput	=	tests_run

OBJ		=	src/main_test.c \
			src/my_str_is_letter.c
tests_run:	lib	$(OBJ)	$(testobjects)
		@echo -e "\e\e[92mCompiled object files for unit testing\e[0m"
		$(CC)  $(CFLAGS) $(CPPFLAGS) -o $(testoutput) $(OBJ) lib/libmy.a $(testobjects) $(testflags)
		@echo -e "\e\e[92mRunning unit test\e[0m"
		./tests_run
