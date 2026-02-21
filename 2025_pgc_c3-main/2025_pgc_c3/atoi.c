/*
 * E89 Pedagogical & Technical Lab
 * project: atoi.c
 * created on:  2025-11-06 - 12:17 +0100
 * 1st author:  sacha.juillard
 * description: function that extracts numbers from chains of characters, stops
 * when it doesnt encounter a number
 */

#include <stdio.h>

int stu_atoi(const char *str)
{
    int i;
    int result;
    int negative;

    result = 0;
    i = 0;
    negative = 0;
    if (str[0] == '-') {
        i = 1;
        negative = 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i = i + 1;
    }
    if (negative == 1) {
        return -result;
    }
    if (str[0] == '\0') {
        return 0;
    }
    return result;
}
