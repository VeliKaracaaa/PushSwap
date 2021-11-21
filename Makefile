##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	main.c			\
		part_a.c		\
		part_b.c		\
		part_three.c	\
		process.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-I./include

all: $(NAME)

make_lib:
	make -C lib/my

$(NAME): make_lib $(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy $(CFLAGS)

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean: clean
	rm -f $(NAME)
	rm -rf include
	make fclean -C lib/my

re: fclean all
