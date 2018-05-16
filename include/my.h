/*
** EPITECH PROJECT, 2018
** mathieu gery
** File description:
** my.h
*/

#include "get_next_line.h"
#include "lib.h"
#include <unistd.h>
#include <stdlib.h>

int my_getnbr(char *);
int *map(int);
void print_map(int, int *);
int count(int);
int *change_arr(int *, int, int, int);
void print_last_spaces(int *, int, int);
void print_message(int *, int, int);
int get_nb_lines(int);
int get_nb_matches(int, int, int *);
int check_str(char *);
void msg_err_match(int, int);
int *change_ia_arr(int*, int, int, int);
int *my_ia(int *, int, int);
int check_err_matches(int, int, int*, int);
int victory(int *, int);
