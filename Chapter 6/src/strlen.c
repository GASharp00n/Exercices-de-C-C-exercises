/*
 * E89 Pedagogical & Technical Lab
 * project: strlen.c
 * created on:  2025-10-30 - 17:48 +0100
 * 1st author:  sacha.juillard
 * description: function that adds 1 to counter as long as it doesnt detect \0
 */

#include <stdio.h>
#include <unistd.h>

unsigned int stu_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
