/*
 * E89 Pedagogical & Technical Lab
 * project: strdup.c
 * created on:  2026-02-04 - 11:20 +0100
 * 1st author:  sacha.juillard
 * description: test file for the strdup function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(strdup, normal_1) {
    char *copy = stu_strdup("Hello world!");
    cr_assert_str_eq(copy, "Hello world!");
    free(copy);
}
Test(strdup, empty) {
    char *copy = stu_strdup("");
    cr_assert_str_eq(copy, "");
    free(copy);
}
Test(strdup, number) {
    char *copy = stu_strdup("451");
    cr_assert_str_eq(copy, "451");
    free(copy);
}
