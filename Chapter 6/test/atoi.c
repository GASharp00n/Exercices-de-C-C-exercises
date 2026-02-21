/*
 * E89 Pedagogical & Technical Lab
 * project: atoi.c
 * created on:  2026-02-04 - 11:17 +0100
 * 1st author:  sacha.juillard
 * description: test file for the atoi function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(atoi, normal_1) {
    cr_assert(eq(i32, atoi("123"), 123));
}

Test(atoi, wrong) {
    cr_assert(eq(i32, atoi("123abc"), 123));
}

Test(atoi, negative) {
    cr_assert(eq(i32, atoi("-123"), -123));
}
Test(atoi, empty) {
    cr_assert(eq(i32, atoi(""), 0));
}
Test(atoi, letters) {
    cr_assert(eq(i32, atoi("abc"), 0));
}
