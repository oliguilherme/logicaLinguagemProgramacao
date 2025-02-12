#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    float chico = 1.70, juca = 1.10;
    int anos = 0;

    while (juca <= chico) {
        chico += 0.02;
        juca += 0.03;
        anos++;
    }

    printf("Serao necessarios %d anos para que Juca seja maior que Chico.\n", anos);

    return 0;
}
