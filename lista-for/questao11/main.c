
#include <stdio.h>
#include <locale.h>

int main() {
    system("cls");
    int entrada, i, fn_1, fn_2, fn_3;

    printf("Informe um inteiro n menor que 46 e maior que zero: ");
    scanf("%d", &entrada);

    if (entrada < 46 && entrada > 0) {
        for (i = 1; i <= entrada; i++) {
            if (i == 1) {
                printf("0 1");
                fn_3 = 1;
                fn_1 = 0;

            } else {
                fn_3 += fn_1;
                fn_1 = fn_3;
                printf(" %d", fn_1);
            
            }

        }
        

    } else {
        printf("\nerro\n");
    }
    return 0;
}
