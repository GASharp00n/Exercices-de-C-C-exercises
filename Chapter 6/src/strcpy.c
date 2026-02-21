/*
 * E89 Pedagogical & Technical Lab
 * project: strcpy.c
 * created on:  2025-11-02 - 19:00 +0100
 * 1st author:  sacha.juillard
 * description: function that copies source and returns destination
 */

#include <stdio.h>
#include <unistd.h>

char *stu_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';

    return dest;
}
