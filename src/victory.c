/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** victory.c
*/

#include "my.h"

int victory(int *arr, int size)
{
	for (int i = 0; i < size; i++)
		if (arr[i] != 0)
			return (1);
	return (0);
}
