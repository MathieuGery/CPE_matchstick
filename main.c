/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** main.c
*/

#include "my.h"

int game(int nb_lines, int max_sticks)
{
	int lines;
	int *arr = map(nb_lines);
	int nb;
	int win = 0;

	print_map(nb_lines, map(nb_lines));
	my_putstr("\nYour turn:\n");
	while (victory(arr, nb_lines) != 0) {
		lines = get_nb_lines(nb_lines);
		if (lines == 0)
			return (0);
		my_putstr("Matches: ");
		nb = get_nb_matches(max_sticks, lines, arr);
		if (nb == -2)
			return (0);
		if (nb != -1) {;
			arr = change_arr(arr, lines, nb, nb_lines);
			print_map(nb_lines, arr);
			if (victory(arr, nb_lines) == 0)
				return (2);
			arr = my_ia(arr, max_sticks, nb_lines);
			if (victory(arr, nb_lines) == 0)
				return (1);
		}
		if (nb != -1)
			my_putstr("\nYour turn:\n");
	}
}

int main(int ac, char **av)
{
	int nb_lines;
	int max_sticks;
	int res;

	if (ac != 3)
		return (84);
	nb_lines = my_getnbr(av[1]);
	max_sticks = my_getnbr(av[2]);
	if (nb_lines > 1 && nb_lines < 100 && max_sticks > 0)
		res = game(nb_lines, max_sticks);
	else
		return (84);
	if (res == 2) {
		my_putstr("You lost, too bad...\n");
		return (2);
	} else if (res == 1) {
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (1);
	} else
		return (0);
}
