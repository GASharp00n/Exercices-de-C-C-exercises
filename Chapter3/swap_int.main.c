#include <unistd.h>
#include <stdio.h>

void swap_int(int *, int *);

int main(void)
{
    int tata;
    int toto;

    tata = 4;
    toto = 9651265;
    swap_int(&tata, &toto);
    if (tata == 9651265 && toto == 4) {
        puts("vous avez réussi");
    } else {
        puts("c'est le flop");
    }
    return (0);
}
