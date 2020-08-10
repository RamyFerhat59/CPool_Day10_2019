/*
** EPITECH PROJECT, 2019
** step.c
** File description:
** step
*/

#include <stdio.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}

int main(int argc, char const *argv[]) {

    int count = 0;

    for (int j = 0; j < my_strlen(argv[1]); j++) {
        if (argv[1][j] == argv[2][0] || argv[1][j] + 32 == argv[2][0] || argv[1][j] - 32 == argv[2][0])
            count++;
    }
    my_putchar(argv[2][0]);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar('\n');
    return 0;
}
