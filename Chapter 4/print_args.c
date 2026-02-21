/*
 * E89 Pedagogical & Technical Lab
 * project: print_args.c
 * created on:  2025-11-05 - 15:59 +0100
 * 1st author:  sacha.juillard
 * description: program that prints all arguments of main(uses stu_puts
 * function for the print)
 */

#include <unistd.h>
#include <stdio.h>

unsigned int stu_puts(const char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i = i + 1;
    }
    write(1, "\n", 1);
    return (i);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    while(i < ac) {
        stu_puts(av[i]);
        i = i + 1;
    }
}
