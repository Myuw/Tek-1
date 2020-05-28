##################################################
#                CRITERION FLAGS                 #
##################################################

testflags	=	-lcriterion --coverage

##################################################
#                 TESTS OBJECTS                  #
##################################################

## /!\ Only be .o /!\ ##
testobjects	=	tests/units_tests/test.o

##################################################
#                  TEST OUTPUT                   #
##################################################

##Test output
testoutput	=	tests_run

##################################################
#                 OBJECTS FILES                  #
##################################################

## /!\ Only be .c /!\ ##
OBJ		=	lib/my/my_strlen.c

##################################################
#                TESTS RUN RULE                  #
##################################################

tests_run:	lib	$(OBJ)	$(testobjects)
	@echo -e "\e[0m[!] \e[92mCompiled object files for unit testing\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(testoutput) $(OBJ) lib/libmy.a $(testobjects) $(testflags)
	@echo -e "\e[0m[i] \e[92mLinked unit tests\e[0m"
	@echo -e "\e[0m[i] \e[92mMoved gcovr files\e[0m"
	@./tests_run
	@mv *.gcno tests
	@mv *.gcda tests
	@echo -e "\e[0m[i] \e[92mRunning unit test\e[0m"