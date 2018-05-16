/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** get_prompt.c
*/

#include "my.h"

int get_nb_lines(int nb_lines)
{
	int lines = 100;
	char *s;

	while (lines > nb_lines || lines == 0) {
		my_putstr("Line: ");
		s = get_next_line(0);
		if (s == NULL) {
			lines = 0;
			break;
		}
		if (s != NULL && check_str(s) == 0) {
			lines = my_getnbr(s);
			if (lines > nb_lines || lines == 0)
				my_putstr("Error: this line is out of range\n");
		}
		free(s);
	}
	return (lines);
}

int check_str(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9') {
			my_putstr("Error: invalid input ");
			my_putstr("(positive number expected)\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int get_nb_matches(int max_sticks, int lines, int *arr)
{
	int sticks;
	char *s;

	s = get_next_line(0);
	if (s == NULL)
		return (-2);
	if (s != NULL) {
		sticks = my_getnbr(s);
		if (check_err_matches(max_sticks, lines, arr, sticks) == -1)
			return (-1);
	}
	if (check_str(s) != 0)
		return (-1);
	return (sticks);
}

int check_err_matches(int max_sticks, int lines, int *arr, int sticks)
{
	if (sticks > max_sticks) {
		msg_err_match(1, max_sticks);
		return (-1);
	}
	if (sticks == 0) {
		msg_err_match(2, max_sticks);
		return (-1);
	}
	if (sticks > arr[lines - 1]) {
		msg_err_match(3, max_sticks);
		return (-1);
	}
	return (0);
}

void msg_err_match(int i, int max_sticks)
{
	if (i == 1) {
		my_putstr("Error: you cannot remove more than ");
		my_put_nbr(max_sticks);
		my_putstr(" matches per turn\n");
	} else if (i == 2)
		my_putstr("Error: you have to remove at least one match\n");
	else
		my_putstr("Error: not enough matches on this line\n");
}
