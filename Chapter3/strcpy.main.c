/*
 * E89 Pedagogical & Technical Lab
 * project: strcpy.main.c
 * created on:  2025-11-02 - 19:00 +0100
 * 1st author:  sacha.juillard
 * description: program that uses strcpy function to return a string of characters
 */

#include <stdio.h>
#include <stdlib.h>

char *stu_strcpy(char *dest, const char *src);

int main(void)
{
    char *str_a;

    str_a = malloc(7 * sizeof (char));
    if (!str_a)
        return 1;
    puts(stu_strcpy(str_a, "hello!"));
    str_a[0] = 'b';
    str_a[4] = 'a';
    puts(str_a);
    return (0);
}
