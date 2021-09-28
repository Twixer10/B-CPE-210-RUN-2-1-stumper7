/*
** EPITECH PROJECT, 2021
** CESAT
** File description:
** CESAR
*/

#include "./include/cesar.h"

void params(char **av)
{
    if (strcmp(av[1], "-f") == 0)
        cesar_file(av[2], atoi(av[3]));
    else if (strcmp(av[1], "-s") == 0)
        create_file(choose_algo(atoi(av[3]), av[2]));
    else
        exit(84);
}

int main(int ac, char **av)
{
    struct stat st;

    if (stat("./crypt", &st) == 0)
        return (84);
    if (ac != 4)
        return (84);
    params(av);
    return (0);
}
