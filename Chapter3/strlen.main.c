/*
 * E89 Pedagogical & Technical Lab
 * project: strlen.main.c
 * created on:  2025-10-30 - 17:50 +0100
 * 1st author:  sacha.juillard
 * description: program that tests if strlen function works by using str and prints numbers of characters in str
 */

#include <stdio.h>
#include <unistd.h>

unsigned int stu_strlen(const char *str);

int main(void)
{
    char str[5];
    unsigned int len;

    str[0] = 'w';
    str[1] = 'a';
    str[2] = 'w';
    str[3] = 'a';
    str[4] = '\0';
    len = stu_strlen(str);
    printf("Number of characters: %u\n", str ,j);
    return 0;
}

