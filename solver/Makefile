##
## EPITECH PROJECT, 2021
## dante
## File description:
## solver makefile
##

MAIN		=	src/main.c
SRC			=	src/maze.c		\
				src/utils.c

INC_DIR		=	./include

CFLAGS		+=	-W -Wall -I$(INC_DIR)

OBJ_MAIN	=	$(MAIN:.c=.o)
OBJ			=	$(SRC:.c=.o)

NAME		=	solver

all:	$(NAME)

$(NAME): $(OBJ_MAIN) $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ_MAIN) $(OBJ)

debug:	CFLAGS += -g
debug:	clean all

clean:
	rm -rf $(OBJ_MAIN) $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all