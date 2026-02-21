/*
 * E89 Pedagogical & Technical Lab
 * project: has_opt.main
 * created on:  2025-11-08 - 18:42 +0100
 * 1st author:  sacha.juillard
 * description: program that uses the has_opt function
 */
#include <stdio.h>
int has_opt(int argc, char **argv, char c);

int main(int ac, char **av)
{
    if (has_opt(ac, av, 'f')) {
        puts("opt f found");
    } else {
        puts("opt f not found");
    }
    return (0);
}
