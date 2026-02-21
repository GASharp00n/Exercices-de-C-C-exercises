/*
 * E89 Pedagogical & Technical Lab
 * project: strcmp.main.c
 * created on:  2025-11-03 - 18:21 +0100
 * 1st author:  sacha.juillard
 * description: program that uses stu_strcmp as function to compare given strings of characters
 */

#include <stdio.h>

int stu_strcmp(const char *s1, const char *s2);

int main(void)
{
    int result;

    result = stu_strcmp("hello world", "hello world");
    printf("TEST: %d\n", result);
    result = stu_strcmp("hello world", "hello");
    printf("TEST: %d\n", result);
    result = stu_strcmp("", "hello world");
    printf("TEST: %d\n", result);
    result = stu_strcmp("", "");
    printf("TEST: %d\n", result);
}
