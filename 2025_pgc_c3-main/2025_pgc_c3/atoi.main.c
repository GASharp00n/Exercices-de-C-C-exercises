/*
 * E89 Pedagogical & Technical Lab
 * project: atoi.main.c
 * created on:  2025-11-03 - 17:18 +0100
 * 1st author:  sacha.juillard
 * description: program that uses stu_atoi for function
 */

#include <stdio.h>

int stu_atoi(const char *);

int main(void)
{
    int result;

    result = stu_atoi("123");
    printf("%d\n", result);
    result = stu_atoi("123abc");
    printf("%d\n", result);
    result = stu_atoi("-123");
    printf("%d\n", result);
    result = stu_atoi("");
    printf("%d\n", result);
}
