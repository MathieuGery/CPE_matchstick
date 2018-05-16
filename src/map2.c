/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** map2.c
*/

#include "my.h"

int count(int nb_lines)
{
	int x = 0;
	int ret = 0;

	for (int i = 0; i < nb_lines; i++) {
		ret = 1 + x;
		x +=2;
	}
	return (ret);
}

int *map(int nb_lines)
{
	int *map = malloc(sizeof(int) * nb_lines);
	int x = 0;

	for (int i = 0; i < nb_lines; i++) {
		map[i] = 1 + x;
		x +=2;
	}
	return (map);
}
