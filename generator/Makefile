##
## EPITECH PROJECT, 2021
## dante
## File description:
## solver makefile
##

NAME		=	generator

MAIN		=	src/main.c
SRC			=	src/generator.c 		\
				src/error_handling.c	\
				src/maze.c				\
				src/init.c

INC_DIR		=	./include
LIB_DIR		=	./lib/my

CFLAGS		+=	-W -Wall -I$(INC_DIR)

OBJ_MAIN	=	$(MAIN:.c=.o)
OBJ			=	$(SRC:.c=.o)


all:		$(NAME)

$(NAME): 	$(OBJ_MAIN) $(OBJ)
			make -C $(LIB_DIR)
			gcc $(CFLAGS) -o $(NAME) $(OBJ_MAIN) $(OBJ) -L$(LIB_DIR) -lmy

clean:
			make -C $(LIB_DIR) clean
			rm -rf $(OBJ_MAIN) $(OBJ)

fclean:		clean
			make -C $(LIB_DIR) fclean
			rm -f $(NAME)

re:	fclean all

debug:		CFLAGS += -g
debug:		clean all

.PHONY :                all, re, clean, fclean, debug
