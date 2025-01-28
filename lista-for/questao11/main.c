#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int entrada, i, fn_1 = 0, fn_2 = 1;

    printf("Informe um inteiro n menor que 46 e maior que zero: ");
    scanf("%d", &entrada);

    if (entrada < 46 && entrada > 0) {
        for (i = 1; i <= entrada; i++) {
                printf(" %d", fn_1);
                fn_2 = fn_2 + fn_1;
                fn_1 = fn_2 - fn_1;
        }
    } else {
        printf("\nerro\n");
    }
    return 0;
}
