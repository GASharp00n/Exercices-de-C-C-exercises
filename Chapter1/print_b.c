#include <unistd.h>

void tc_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    tc_putchar('b');
    tc_putchar('\n');
}


