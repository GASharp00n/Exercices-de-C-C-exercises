#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

int mini_calculator(char op, int a, int b);

Test(mini_calculator, add) {
    int result = mini_calculator('+', 10, 10);
    cr_assert_eq(result, 20);
}
Test(mini_calculator, sub) {
    int result = mini_calculator('-', 10, 10);
    cr_assert_eq(result, 0);
}
Test(mini_calculator, divide) {
    int result = mini_calculator('/', 10, 10);
    cr_assert_eq(result, 1);
}
Test(mini_calculator, modulo) {
    int result = mini_calculator('%', 10, 10);
    cr_assert_eq(result, 0);
}
Test(mini_calculator, multiply) {
    int result = mini_calculator('*', 10, 10);
    cr_assert_eq(result, 100);
}
Test(mini_calculator, power) {
    int result = mini_calculator('p', 10, 10);
    cr_assert_eq(result, 65536);
}
