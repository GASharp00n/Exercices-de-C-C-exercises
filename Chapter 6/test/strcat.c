/*
 * E89 Pedagogical & Technical Lab
 * project: strcat.c
 * created on:  2026-02-04 - 11:19 +0100
 * 1st author:  sacha.juillard
 * description: test file for the strcat function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(strcat, normal) {
    char *str1;
    char *str2;

    str1 = malloc(sizeof (char) * 7);
    str2 = malloc(sizeof (char) * 4);
    stu_strcpy(str1, "abc");
    stu_strcpy(str2, "def");
    cr_assert(eq(str, stu_strcat(str1,str2),"abcdef"));
    free(str1);
}
Test(stu_strcat, blank)
{
    char *str1 = malloc(sizeof (char) * 1);
    char *str2 = malloc(sizeof (char) * 1);

    stu_strcpy(str1, "");
    stu_strcpy(str2, "");
    cr_assert(eq(str, stu_strcat(str1, str2), ""));
    free(str1);
    free(str2);
}
