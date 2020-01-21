libobjects	=	lib/my/my_putchar.o			\
			lib/my/my_swap.o			\
			lib/my/my_isneg.o			\
			lib/my/my_put_nbr.o			\
			lib/my/my_putstr.o			\
			lib/my/my_strlen.o			\
			lib/my/my_getnbr.o			\
			lib/my/my_compute_power_rec.o		\
			lib/my/my_compute_square_root.o		\
			lib/my/my_strcpy.o			\
			lib/my/my_revstr.o			\
			lib/my/my_strcmp.o			\
			lib/my/my_putstr.o			\
			lib/my/my_atoi.o			\
			lib/my/my_itoa.o			\
			lib/my/my_printf.o			\
			lib/my/my_put_nbr_unsigned_int.o	\
			lib/my/my_dtob.o			\
			lib/my/my_dtoh.o			\
			lib/my/sharp_condition.o		\
			lib/my/my_dtoh_2.o			\
			lib/my/my_dtoh_x2.o			\
			lib/my/my_dtoh_x.o			\
			lib/my/my_dtoo.o			\
			lib/my/my_revstr.o			\
			lib/my/sharp_condition.o		\

liboutput	=	libmy.a

lib:	$(libobjects)
	@echo -e "\e[0m[!] \e[92mCompiled library's object files\e[0m"
	@echo -ne "\e[0m[!]\e[93m"
	ar rc $(liboutput) $(libobjects)
	@echo -e "\e[0m[i] \e[92mLinked library\e[0m"
	@mv libmy.a lib/
	@echo -e "\e[0m[i] \e[92mMoved library\e[0m"
