##
## EPITECH PROJECT, 2021
## solver
## File description:
## bonus makefile
##

SRC_BONUS			=	src/main.c					\
						src/ppm.c

SRC_ORIGINAL		=	../../solver/src/maze.c		\
						../../solver/src/solved_maze.c	\
						../../solver/src/solver.c		\
						../../solver/src/utils.c

INC_DIR_BONUS		=	./include
INC_DIR_ORIGINAL	=	../../solver/include
LIB_DIR_ORIGINAL	=	../../solver/mylib

CFLAGS				=	-W -Wall -I$(INC_DIR_BONUS) -I$(INC_DIR_ORIGINAL)

OBJ					=	$(SRC_BONUS:.c=.o) $(SRC_ORIGINAL:.c=.o)

NAME				=	solver

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_DIR_ORIGINAL)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIB_DIR_ORIGINAL) -lmy -lm

clean:
	make -C $(LIB_DIR_ORIGINAL) clean
	rm -rf $(OBJ)

fclean:
	make -C $(LIB_DIR_ORIGINAL) fclean
	rm -f $(NAME)

re:	fclean all