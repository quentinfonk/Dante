##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

CC	?=	gcc

RM	?=	rm -f

CFLAGS	=	-Wall -Wextra -O3

CPPFLAGS=	-I./include

SRC	=	src/main.c	\
		src/my_str_to_word_array.c	\
		src/my_strlen.c	\
		src/bubble_sort.c	\
		src/my_strdup.c	\
		src/check.c	\
		src/check_dist.c	\
		src/add_supp_node.c	\
		src/check_end.c	\
		src/check_tall.c	\
		src/add_supp.c	\

NAME	=	solver

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

debug:	CFLAGS += -g
debug:	fclean $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) *~
	$(RM) vgcore.*
re:	fclean all

.PHONY:	all clean fclean re debug
