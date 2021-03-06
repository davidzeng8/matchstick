/*
** my_loop.c for allum1 in /home/zeng_d
**
** Made by David Zeng
** Login   <zeng_d@epitech.net>
**
** Started on  Mon Feb  8 23:34:20 2016 David Zeng
** Last update Sun Feb 21 19:27:00 2016 David Zeng
*/

#include "my_fonction.h"

int		my_check_win(t_allum *allumette, int player)
{
  int		nb_allum;
  unsigned int	i;

  nb_allum = 0;
  i = 0;
  while (i < allumette->row)
    {
      nb_allum += allumette->nb_allum[i];
      i = i + 1;
    }
  if (nb_allum != 0)
    return (1);
  if (player == YOU)
    my_printf("I lost.. snif.. but I’ll get you next time!!\n");
  else if (player == IA)
    my_printf("You lost, too bad..\n");
  return (0);
}

void		my_loop(t_allum *allumette)
{
  int		player;
  int		tmp;

  player = YOU;
  tmp = 1;
  while (tmp == 1)
    {
      if (player == YOU)
	{
	  my_printf("Your turn:\n");
	  if (player_turn(allumette) == 1 || allumette->end == 1)
	    return;
	  player = IA;
	}
      else if (player == IA)
	{
	  my_printf("AI\'s turn...\n");
	  ai_turn(allumette);
	  player = YOU;
	}
      allumette->show_allum(allumette);
      if ((tmp = my_check_win(allumette, player)) == 1)
	my_putchar('\n');
    }
}
