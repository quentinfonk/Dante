##
## EPITECH PROJECT, 2020
## CPE_dante_2019
## File description:
## Makefile
##

GENERATOR	=	generator/
SOLVER		=	solver/

all:
	make -C $(GENERATOR)
	make -C $(SOLVER)

clean:
	make -C $(GENERATOR) clean
	make -C $(SOLVER) clean

fclean: clean
	make fclean -C $(GENERATOR)
	make fclean -C $(SOLVER)

re:	fclean all

.PHONY: all clean fclean re
