#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    tc_putchar('0');
    tc_putchar('1');
    tc_putchar('2');
    tc_putchar('3');
    tc_putchar('4');
    tc_putchar('5');
    tc_putchar('6');
    tc_putchar('7');
    tc_putchar('8');
    tc_putchar('9');
    tc_putchar('\n');
}
