##
## EPITECH PROJECT, 2021
## dante
## File description:
## main makefile
##

GENERATOR	=	./generator
SOLVER		=	./solver

all:
	make -C $(GENERATOR)
	make -C $(SOLVER)

clean:
	make -C $(GENERATOR) clean
	make -C $(SOLVER) clean

fclean:
	make -C $(GENERATOR) fclean
	make -C $(SOLVER) fclean

debug:
	make -C $(GENERATOR) debug
	make -C $(SOLVER) debug

re:
	make -C $(GENERATOR) re
	make -C $(SOLVER) re