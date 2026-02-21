#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "mini_calculator2.h"
int mini_calculator2(char *op, int a, int b);
Test(mini_calculator2, add_symbol) {
    cr_assert_eq(mini_calculator2("+", 10, 10), 20);
}

Test(mini_calculator2, add_verb) {
    cr_assert_eq(mini_calculator2("add", 10, 10), 20);
}

Test(mini_calculator2, sub_symbol) {
    cr_assert_eq(mini_calculator2("-", 15, 5), 10);
}

Test(mini_calculator2, sub_verb) {
    cr_assert_eq(mini_calculator2("sub", 15, 5), 10);
}

Test(mini_calculator2, mul_symbol) {
    cr_assert_eq(mini_calculator2("*", 4, 5), 20);
}

Test(mini_calculator2, mul_verb) {
    cr_assert_eq(mini_calculator2("mul", 4, 5), 20);
}

Test(mini_calculator2, div_symbol) {
    cr_assert_eq(mini_calculator2("/", 20, 4), 5);
}

Test(mini_calculator2, div_verb) {
    cr_assert_eq(mini_calculator2("div", 20, 4), 5);
}

Test(mini_calculator2, mod_symbol) {
    cr_assert_eq(mini_calculator2("%", 10, 3), 1);
}

Test(mini_calculator2, mod_verb) {
    cr_assert_eq(mini_calculator2("mod", 10, 3), 1);
}

Test(mini_calculator2, pow_symbol) {
    cr_assert_eq(mini_calculator2("p", 2, 3), 8);
}

Test(mini_calculator2, pow_verb) {
    cr_assert_eq(mini_calculator2("pow", 2, 3), 8);
}

Test(mini_calculator2, invalid_op) {
    cr_assert_eq(mini_calculator2("unknown", 10, 10), 0);
    cr_assert_eq(mini_calculator2("x", 10, 10), 0);
}
