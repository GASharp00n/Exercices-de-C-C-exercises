/*
 * E89 Pedagogical & Technical Lab
 * project: strchr.c
 * created on:  2026-02-04 - 11:19 +0100
 * 1st author:  sacha.juillard
 * description: test file for the strchr function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(strchr, normal_1) {
    cr_assert(eq(chr, *stu_strchr("hello", 'e'), 'e'));
}

Test(strchr, normal_2) {
    cr_assert(eq(chr, *stu_strchr("abcdef",'e'), 'e'));
}

Test(strchr, empty) {
    cr_assert(eq(ptr, stu_strchr("", 'g'), NULL));
}
Test(strchr, wrong) {
    cr_assert(eq(ptr, stu_strchr("yay", 'l'), NULL));
}
