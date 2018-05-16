/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** map.c
*/

#include "my.h"

void print_first_spaces(int *arr, int i, int nb_lines)
{
	int lines = count(nb_lines);
	int stick = arr[i];
	int nb = (lines - stick) / 2;

	for (int i = 0; i < nb;i++)
		my_putchar(' ');
}

void print_pipe(int nb)
{
	for (int i = 0; i < nb; i++)
		my_putchar('|');
}

void print_map(int nb_lines, int *arr)
{
	for (int i = 0; i < count(nb_lines); i++)
		my_putchar('*');
	my_putstr("**\n");
	for (int i = 0; i < nb_lines; i++) {
		my_putchar('*');
		print_first_spaces(map(nb_lines), i, nb_lines);
		print_pipe(arr[i]);
		print_last_spaces(arr, i, nb_lines);
		my_putstr("*\n");
		}
	for (int i = 0; i < count(nb_lines); i++)
		my_putchar('*');
	my_putstr("**\n");
}

void print_last_spaces(int *arr, int i, int nb_lines)
{
	int *barr = map(nb_lines);
	int lines = count(nb_lines);
	int nb = ((lines - barr[i]) / 2) + (barr[i] - arr[i]);
	for (int i = 0; i < nb; i++)
		my_putchar(' ');
}
