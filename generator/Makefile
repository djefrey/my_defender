##
## EPITECH PROJECT, 2021
## dante
## File description:
## generator makefile
##

MAIN		=	src/main.c
SRC			=	

INC_DIR		=	./include

CFLAGS		+=	-W -Wall -I$(INC_DIR)

OBJ_MAIN	=	$(MAIN:.c=.o)
OBJ			=	$(SRC:.c=.o)

NAME		=	generator

all:	$(NAME)

$(NAME): $(OBJ_MAIN) $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ_MAIN) $(OBJ)

clean:
	rm -rf $(OBJ_MAIN) $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean