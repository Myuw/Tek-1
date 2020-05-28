#Object file containing the main function (should be a .o)
srcmain	:=	src/main.o

#Object files containing other functions (should be a .o)
srcobjects	:=	src/open_read_file.o 			\
				src/print_map.o 				\
				src/free_map.o 					\
				src/strtab.o 					\
				src/check_in_out.o 				\
				src/check_out.o 				\
				src/move.o 						\
				src/right_wall_follower.o 		\

#src/move_in_maze.o 				\
#The name of the produced binary
srcoutput	:=	solver
