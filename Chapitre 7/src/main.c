#include <stdlib.h>
#include "stu.h"

int main(void)
{
    const char *str0 = "hello world";
    char *str1;

    str1 = stu_strdup("hallo world");
    str1[1] = 'e';
    if (stu_strcmp(str0, str1) == 0) {
        stu_puts("everything is fine");
    } else {
        stu_puts("that doesn't look right");
    }
    free(str1);
}
