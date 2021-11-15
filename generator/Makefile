##
## EPITECH PROJECT, 2020
## CPE_dante_2019
## File description:
## Makefile
##

SRC	=	src/main.c			\
		src/my_isnum.c			\
		src/generator.c			\
		src/create_map.c		\
		src/free_map.c			\
		src/stack.c			\
		src/perfect_and_odd.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CFGLAGS	=	-Wall -Wextra

CPPFLAGS=	$(INCLUDE)

INCLUDE	=	-I./include

RM	?=	rm -f

CC	?=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) $(INLCUDE) -o $(NAME)

debug:	CFLAGS += -g3
debug:	fclean $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re debug
