#include <stdio.h>
#include <locale.h>

int main() {
    system("cls");
    int entrada, i, fn, soma_fn = 0, soma_fn_aux = 0, fn_1 = 0, fn_2 = 0;

    printf("Informe um inteiro n menor que 46 e maior que zero: ");
    scanf("%d", &entrada);

    if (entrada < 46 && entrada > 0) {
        for (i = 1; i <= entrada; i++) {
            soma_fn = soma_fn + soma_fn_aux;

        }
        

    } else {
        printf("\nerro\n");
    }
    return 0;
}
