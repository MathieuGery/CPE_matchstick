##
## EPITECH PROJECT, 2018
## mathieu gery
## File description:
## Makefile for matchstick
##

SRC	=	main.c			\
		src/change_int.c	\
		src/get_prompt.c	\
		src/ia.c		\
		src/victory.c		\
		src/map.c		\
		src/map2.c

NAME	=	matchstick

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -g -o $(NAME) $(SRC) -Iinclude -Llib/my -lmy -Wall -Wextra

clean:
	make clean -C lib/my

fclean:	clean
	rm -rf $(NAME)
	make fclean -C lib/my

re:	fclean all
