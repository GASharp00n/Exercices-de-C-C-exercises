/*
 * E89 Pedagogical & Technical Lab
 * project: strcmp.c
 * created on:  2026-02-04 - 11:20 +0100
 * 1st author:  sacha.juillard
 * description: DESCRIPTION
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(strcmp, normal) {
    cr_assert(eq(i32, stu_strcmp("hello", "hello"), 0));
}

Test(strcmp, wrong) {
    cr_assert(eq(i32, stu_strcmp("abcdef", "abqdf"), 1));
}
Test(strcmp, empty) {
    cr_assert(eq(i32, stu_strcmp("", ""), 0));
}
Test(strcmp, empty2) {
    cr_assert(eq(i32, stu_strcmp("dfsd", ""), 1));
}
Test(strcmp, empty3) {
    cr_assert(eq(i32, stu_strcmp("", "dfsg"), 1));
}
Test(strcmp, yeet) {
    cr_assert(eq(i32, stu_strcmp("abc", "ab"), 1));
}
