#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"
Test(stu_pow, power_2_16) {
    cr_assert(eq(i32, stu_pow(2, 16), 65536));
}

Test(stu_pow, large_power_overflow) {
    cr_assert(eq(i32, stu_pow(9, 452), 65536));
}

Test(stu_pow, negative_base) {
    cr_assert(eq(i32, stu_pow(-65, 7), 65536));
}

Test(stu_pow, zero_power) {
    cr_assert(eq(i32, stu_pow(5, 0), 1));
}

Test(stu_pow, zero_base) {
    cr_assert(eq(i32, stu_pow(0, 5), 0));
}

