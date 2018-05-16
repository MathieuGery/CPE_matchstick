/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** ia.c
*/

#include "my.h"

int check_lines(int *arr, int lines)
{
	if (arr[lines - 1] != 0)
		return (0);
	return (1);
}

int check_sticks(int *arr, int lines, int sticks)
{
	if (arr[lines - 1] >= sticks)
		return (0);
	return (1);
}

int *my_ia(int *arr, int max_sticks, int nb_lines)
{
	int lines = rand() % nb_lines + 1;
	int sticks = rand() % max_sticks + 1;

	while (check_lines(arr, lines) != 0)
		lines = rand() % nb_lines + 1;

	while (check_sticks(arr, lines, sticks) != 0)
		sticks = rand() % max_sticks + 1;

	arr = change_ia_arr(arr, lines, sticks, nb_lines);
	print_map(nb_lines, arr);
	return (arr);
}

int *change_ia_arr(int *arr, int nb_lines, int nb, int size)
{
	if (arr[nb_lines - 1] != 0 && nb_lines != 0) {
		arr[nb_lines - 1] = arr[nb_lines - 1] - nb;
	}
	my_putstr("\nAI's turn...\n");
	my_putstr("AI removed ");
	my_put_nbr(nb);
	my_putstr(" match(es) from line ");
	my_put_nbr(nb_lines);
	my_putchar('\n');
	return (arr);
}
