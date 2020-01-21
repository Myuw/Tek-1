testflags	=	-lcriterion --coverage

testobjects	=	test/test.o		\

testoutput	=	tests_run

OBJ		=	lib/my/my_strlen.c	\

tests_run:	lib	$(OBJ)	$(testobjects)
		@echo -e "\e[0m[!] \e[92mCompiled object files for unit testing\e[0m"
		@echo -ne "\e[0m[!]\e[93m"
		$(CC) $(CFLAGS) -o $(testoutput) $(OBJ) lib/libmy.a $(testobjects) $(testflags)
		@echo -e "\e[0m[i] \e[92mLinked unit tests\e[0m"
		@echo -e "\e[0m[i] \e[92mMoved gcovr files\e[0m"
		./tests_run
		@echo -e "\e[0m[i] \e[92mRunning unit test\e[0m"
