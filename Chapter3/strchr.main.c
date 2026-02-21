/*
 * E89 Pedagogical & Technical Lab
 * project: strchr.main
 * created on:  2025-11-06 - 12:08 +0100
 * 1st author:  sacha.juillard
 * description: program that uses the stu_strchr function to search character
 * adress if its in the given string of
 * characters
 */

#include <stdio.h>
#include <unistd.h>

char *stu_strchr(const char *str, int c);

int main(void)
{
    char *result;

    result = stu_strchr("hello world", 'e');
    printf("result: %d\n", result);
    result = stu_strchr("chezbuger", 'j');
    printf("result: %d\n", result);
    result = stu_strchr("", 'e');
    printf("result: %d\n", result);
}
