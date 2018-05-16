/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** change_int.c
*/

#include "my.h"

int *change_arr(int *arr, int nb_lines, int nb, int size)
{
	if (nb_lines == 0)
		my_putstr("Error: this line is out of range\n");
	if (arr[nb_lines - 1] != 0 && nb_lines != 0) {
		arr[nb_lines - 1] = arr[nb_lines - 1] - nb;
		print_message(arr, nb_lines, nb);
	}
	return (arr);
}

void print_message(int *arr, int nb_lines, int nb)
{
	my_putstr("Player removed ");
	my_put_nbr(nb);
	my_putstr(" match(es) from line ");
	my_put_nbr(nb_lines);
	my_putchar('\n');
}
