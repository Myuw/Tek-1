#Object file containing the main function (should be a .o)
srcmain	:=	src/main.o

#Object files containing other functions (should be a .o)
srcobjects	:=	src/game/client.o					\
				src/game/host.o						\
				src/game/miscellaneous.o			\
				src/map/my_get_map.o				\
				src/map/my_strtab.o					\
				src/map/my_map_boat.o				\
				src/map/my_print_map.o				\
				src/map/my_on_attack.o				\
				src/map/my_victory.o				\
				src/map/my_map_error.o				\
				src/map/no_same_params.o			\
				src/signals/recieve.o				\
				src/signals/send.o					\
				src/signals/miscellaneous.o


#The name of the produced binary
srcoutput	:= navy
