##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC =			my_pow.c					\
				my_sqrt.c					\
				my_find_prime_sup.c			\
				my_atoi.c 					\
				my_is_prime.c				\
				my_putnbr.c					\
				my_putchar.c 				\
				my_putnbr_base.c 			\
				my_putstr.c 				\
				my_revstr.c 				\
				my_showstr.c 				\
				my_sort_int_array.c 		\
				my_str_isalpha.c 			\
				my_str_islower.c 			\
				my_str_isnum.c 				\
				my_str_isprintable.c 		\
				my_str_isupper.c 			\
				my_strcapitalize.c 			\
				my_strcat.c 				\
				my_strcmp.c 				\
				my_strcpy.c 				\
				my_strlen.c 				\
				my_strlowcase.c 			\
				my_strncat.c 				\
				my_strncmp.c 				\
				my_strncpy.c 				\
				my_findstr.c 				\
				my_strupcase.c 				\
				my_swap.c 					\
				my_putarray.c 				\
				my_strtoarray.c				\
				flags_part_letter.c 		\
				flags_part_num_sized.c 		\
				flags_part_num_sized2.c 	\
				flags_part_num.c 			\
				my_printf.c 				\
				printf_prefix.c 			\
				my_openfd.c 				\

OBJ = 			$(SRC:.c=.o)

NAME =			libmy.a

all : 			$(NAME)

$(NAME):		$(OBJ)
				ar rc $(NAME) $(OBJ)
				cp $(NAME) ../
				cp ./include/my.h ../../include/

clean :
				rm -f *.o

fclean :		clean
				rm -f $(NAME)
				rm -f ../$(NAME)

re: 			fclean all
