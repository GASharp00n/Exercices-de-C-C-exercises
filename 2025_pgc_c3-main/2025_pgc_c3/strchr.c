/*
 * E89 Pedagogical & Technical Lab
 * project: strchr
 * created on:  2025-11-06 - 12:11 +0100
 * 1st author:  sacha.juillard
 * description: function that returns character adress if found in the string of characters
 */

#include <stdio.h>

char *stu_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return (char *)&str[i];
        }
        i = i + 1;
    }
    if (c == '\0'){
        return (char *)&str[i];
    }
    return NULL;
}
