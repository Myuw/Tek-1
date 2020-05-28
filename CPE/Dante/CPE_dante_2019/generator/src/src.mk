#Object file containing the main function (should be a .o)
srcmain	:=	src/main.o

#Object files containing other functions (should be a .o)
srcobjects	:=	src/generator.o	\
				src/create_map.o		\
				src/map.o		\
				src/cell_selection.o	\
				src/trackback.o

#The name of the produced binary
srcoutput	:=	generator
