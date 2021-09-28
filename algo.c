/*
** EPITECH PROJECT, 2021
** algo
** File description:
** algo
*/

#include "./include/cesar.h"

char *choose_algo(int n, char *str)
{
    if (n == 0)
        return (str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            lowercase(n, &str[i]);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            upercase(n, &str[i]);
        else
            continue;
    }
    return (str);
}

void lowercase(int n, char *s)
{
    if (n > 0) {
        for (; n != 0; n--) {
            if (*s == 'z')
                *s = 'a' - 1;
            *s += 1;
        }
    } else {
        for (; n != 0; n++) {
            if (*s == 'a')
                *s = 'z' + 1;
            *s -= 1;
        }
    }
}

void upercase(int n, char *s)
{
    if (n > 0) {
        for (; n != 0; n--) {
            if (*s == 'Z')
                *s = 'A' - 1;
            *s += 1;
        }
    } else {
        for (; n != 0; n++) {
            if (*s == 'A')
                *s = 'Z' + 1;
            *s -= 1;
        }
    }
}

void create_file(char *str)
{
    int fd = 0;

    if ((fd = creat("./crypt", 444)) == -1)
        exit(84);
    dprintf(fd, str);
    chmod("./crypt", S_IROTH | S_IRGRP | S_IRUSR);
    close(fd);
}
