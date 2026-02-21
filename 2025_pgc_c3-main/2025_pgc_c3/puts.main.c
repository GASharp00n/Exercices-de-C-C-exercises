/*
 * E89 Pedagogical & Technical Lab
 * project: puts.main.c
 * created on:  2025-11-05 - 12:35 +0100
 * 1st author:  sacha.juillard
 * description: program that uses the function stu_puts to print a chain of characters and returns how much there are
 */

#include <stdio.h>
#include <unistd.h>

int stu_puts(const char *str);

int main(void)
{
    int result;

    result = stu_puts("hello world");
    printf("Result: %d\n", result);
}
