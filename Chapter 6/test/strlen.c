/*
 * E89 Pedagogical & Technical Lab
 * project: strlen.c
 * created on:  2026-02-04 - 11:20 +0100
 * 1st author:  sacha.juillard
 * description: test file for the strlen function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(strlen, normal_1) {
    cr_assert(eq(i32, stu_strlen("hello"), 5));
}

Test(strlen, normal_2) {
    cr_assert(eq(i32, stu_strlen("abcdef"), 6));
}

Test(strlen, empty) {
    cr_assert(eq(i32, stu_strlen(""), 0));
}
Test(strlen, numbers) {
    cr_assert(eq(i32, stu_strlen("4652"), 4));
}
