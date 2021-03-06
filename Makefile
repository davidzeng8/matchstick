##
## Makefile for Makefile in /home/zeng_d/test/10/test
##
## Made by David Zeng
## Login   <zeng_d@epitech.net>
##
## Started on  Mon Oct 12 13:31:18 2015 David Zeng
## Last update Fri Mar 18 14:10:10 2016 David Zeng
##

SRC	= main.c \
	  object/allum.c \
	  my_loop.c \
	  my_player_turn.c \
	  my_ia_turn.c \

NAME	= allum1

LIB	= libmy.a

CC	= gcc

OBJ	= $(SRC:.c=.o)

CFLAGS	=  -L./lib -lmy -I./include/ -g -W -Werror -Wall

PATHS	= ./lib/my/

all: 	  ./lib/$(LIB) $(NAME)

$(NAME):  $(OBJ)
	  $(CC) -o $(NAME) $(OBJ) $(CFLAGS)

./lib/$(LIB):
	  $(MAKE) -C $(PATHS) yo

clean:
	  rm -f $(OBJ)

fclean:	  clean
	  rm -f $(NAME)

re:	  fclean all

.PHONY:	  all clean fclean re

yo:	  all clean

.c.o:
	  @$(CC) -c $< -o $@ $(CFLAGS)
