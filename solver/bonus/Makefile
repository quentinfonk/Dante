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

SRC	=	main.c	\
		my_str_to_word_array.c	\
		my_strlen.c	\
		bubble_sort.c	\
		my_strdup.c	\
		check.c	\
		check_dist.c	\
		add_supp_node.c	\
		check_end.c	\
		check_tall.c	\
		add_supp.c	\
		print.c	\

NAME	=	bonus

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lncurses

debug:	CFLAGS += -g3
debug:	fclean $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) *~
	$(RM) vgcore.*
re:	fclean all

.PHONY:	all clean fclean re debug
