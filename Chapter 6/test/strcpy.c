/*
 * E89 Pedagogical & Technical Lab
 * project: strcpy.c
 * created on:  2026-02-04 - 11:20 +0100
 * 1st author:  sacha.juillard
 * description: test file for the strcpy function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(strcpy, normal_1) {
    char *str;
    str = malloc(7 * sizeof (char));
    cr_assert(eq(ptr, stu_strcpy(str, "baguet"), str));
    free(str);
}
Test(strcpy, empty) {
    char *str;
    str = malloc(1 * sizeof (char));
    cr_assert(eq(ptr, stu_strcpy(str, ""), str));
    free(str);
}
