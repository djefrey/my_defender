##
## EPITECH PROJECT, 2021
## dante
## File description:
## solver makefile
##

MAIN		=	src/main.c
SRC			=	src/maze.c			\
				src/solver.c		\
				src/solved_maze.c	\
				src/utils.c

INC_DIR		=	./include
LIB_DIR		=	./mylib

CFLAGS		+=	-W -Wall -I$(INC_DIR)

OBJ_MAIN	=	$(MAIN:.c=.o)
OBJ			=	$(SRC:.c=.o)

NAME		=	solver

all:	$(NAME)

$(NAME): $(OBJ_MAIN) $(OBJ)
	make -C $(LIB_DIR)
	gcc $(CFLAGS) -o $(NAME) $(OBJ_MAIN) $(OBJ) -L$(LIB_DIR) -lmy

debug:	CFLAGS += -g
debug:	clean all

clean:
	make -C $(LIB_DIR) clean
	rm -rf $(OBJ_MAIN) $(OBJ)

fclean:	clean
	make -C $(LIB_DIR) fclean
	rm -f $(NAME)

re:	fclean all