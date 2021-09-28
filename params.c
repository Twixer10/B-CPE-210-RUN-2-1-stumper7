/*
** EPITECH PROJECT, 2021
** params
** File description:
** params
*/

#include "./include/cesar.h"

void cesar_file(char *str, int n)
{
    int fd = 0;
    struct stat st;
    char *new = NULL;
    char *tmp = NULL;

    if ((fd = open(str, O_RDONLY)) == -1)
        exit(84);
    if (stat(str, &st) == -1)
        exit(84);
    if ((new = malloc(sizeof(char *) * st.st_size)) == NULL)
        exit(84);
    if (read(fd, new, st.st_size) == -1)
        exit(84);
    tmp = choose_algo(n, new);
    create_file(tmp);
    free(tmp);
    close(fd);
}
