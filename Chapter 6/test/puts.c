/*
 * E89 Pedagogical & Technical Lab
 * project: puts.c
 * created on:  2026-02-04 - 11:19 +0100
 * 1st author:  sacha.juillard
 * description: test file for the puts function
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(puts, normal_1) {
    cr_assert(eq(i32, stu_puts("hello"), 6));
}
Test(puts, normal_2) {
    cr_assert(eq(i32, stu_puts("tabouret"), 9));
}
Test(puts, nothing) {
    cr_assert(ne(i32, stu_puts(""), 0));
}
