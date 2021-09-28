/*
** EPITECH PROJECT, 2021
** cesar
** File description:
** cesar
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

char *choose_algo(int n, char *str);
void lowercase(int n, char *s);
void upercase(int n, char *s);
void cesar_file(char *str, int n);
void create_file(char *str);
