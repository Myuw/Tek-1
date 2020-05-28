#Object file containing the main function (should be a .o)
srcmain	:=	src/main.o

#Object files containing other functions (should be a .o)
srcobjects	:=	src/response/my_strtab.o 		\
				src/response/get_response.o 	\
				src/response/destroy_response.o


#The name of the produced binary
srcoutput	:= ai
