/*
 * E89 Pedagogical & Technical Lab
 * project: mini_calculator3 tests
 * created on: 2026-02-12
 * author: ChatGPT
 */

#include <criterion/criterion.h>
#include "mini_calculator3.h"
#include <stdlib.h>

Test(mini_calculator3, addition) {
    int nums[] = {3, 5};
    cr_assert_eq(mini_calculator("+", nums, 2), 8);
    cr_assert_eq(mini_calculator("add", nums, 2), 8);
}

Test(mini_calculator3, subtraction) {
    int nums[] = {10, 4};
    cr_assert_eq(mini_calculator("-", nums, 2), 6);
    cr_assert_eq(mini_calculator("sub", nums, 2), 6);
}

Test(mini_calculator3, multiplication) {
    int nums[] = {7, 6};
    cr_assert_eq(mini_calculator("*", nums, 2), 42);
    cr_assert_eq(mini_calculator("mul", nums, 2), 42);
}

Test(mini_calculator3, division) {
    int nums[] = {20, 4};
    cr_assert_eq(mini_calculator("/", nums, 2), 5);
    cr_assert_eq(mini_calculator("div", nums, 2), 5);
}

Test(mini_calculator3, division_by_zero) {
    int nums[] = {10, 0};
    cr_assert_eq(mini_calculator("/", nums, 2), 0);
    cr_assert_eq(mini_calculator("div", nums, 2), 0);
}

Test(mini_calculator3, modulo) {
    int nums[] = {17, 5};
    cr_assert_eq(mini_calculator("%", nums, 2), 2);
    cr_assert_eq(mini_calculator("mod", nums, 2), 2);
}

Test(mini_calculator3, modulo_by_zero) {
    int nums[] = {10, 0};
    cr_assert_eq(mini_calculator("%", nums, 2), 0);
    cr_assert_eq(mini_calculator("mod", nums, 2), 0);
}

Test(mini_calculator3, power) {
    int nums[] = {2, 5};
    cr_assert_eq(mini_calculator("p", nums, 2), 32);
    cr_assert_eq(mini_calculator("pow", nums, 2), 32);
}

Test(mini_calculator3, sum_multiple_numbers) {
    int nums[] = {1, 2, 3, 4};
    cr_assert_eq(mini_calculator("s", nums, 4), 10);
    cr_assert_eq(mini_calculator("sum", nums, 4), 10);
}

Test(mini_calculator3, average_multiple_numbers) {
    int nums[] = {2, 4, 6, 8};
    cr_assert_eq(mini_calculator("a", nums, 4), 5);
    cr_assert_eq(mini_calculator("avg", nums, 4), 5);
}

Test(mini_calculator3, unknown_operator_returns_zero) {
    int nums[] = {1, 2};
    cr_assert_eq(mini_calculator("unknown", nums, 2), 0);
}
