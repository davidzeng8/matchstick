##
## Makefile for mklib in /home/zeng_d/usefull/my_lib/source
##
## Made by David Zeng
## Login   <zeng_d@epitech.net>
##
## Started on  Sun Oct 11 14:33:50 2015 David Zeng
## Last update Wed Feb  3 23:26:05 2016 David Zeng
##

SRC=	  my_getnbr.c \
	  my_getnbr_err.c \
          my_putchar.c \
          my_put_nbr.c \
          my_putstr.c \
          my_revstr.c \
          my_strcat.c \
          my_strcmp.c \
	  my_strncmp.c \
          my_strcpy.c \
	  my_strncpy.c \
          my_strlen.c \
	  my_strdup.c \
	  my_strndup.c \
	  my_show_tab.c \
	  my_tablen.c \
	  my_free_tab.c \
	  my_put_err.c \
	  get_next_line.c \
	  printf/my_printf.c \
	  printf/disp_stdarg.c \
	  printf/my_print.c \
	  printf/my_print2.c \
	  printf/my_print3.c \
	  printf/my_printS.c \

OBJ=	  $(SRC:.c=.o)

NAME=	  libmy.a

CFLAGS=	  -W -Werror -Wall -I../../include/ -I./

AR=	  @ar rc

RAN=	  @ranlib

all:	  ../$(NAME)

../$(NAME):	$(OBJ)
	  $(AR) $(NAME) $(OBJ)
	  $(RAN) $(NAME)
	  @mv $(NAME) ../

clean:
	  @rm -f $(OBJ)

fclean:		clean
	  @rm -f ../$(NAME)

re:	fclean all

yo:	all clean

.c.o:
	  @gcc -c $< -o $@ $(CFLAGS)
