#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    int i = 0, j = 0;
    float vetor[10], maior_valor = 0, menor_valor = 0, dif = 0;

    for (i; i < 10; i++) {
        printf("%d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (j; j < 10; j++) {
        if (j != 9) {
            dif = vetor[j + 1] - vetor[j];
            if (j == 0) {
                maior_valor = dif;
                menor_valor = dif;
            } else {
                if (dif >= maior_valor) {
                    maior_valor = dif;
                } else {
                    menor_valor = dif;
                }
            }
        } else {
            dif = vetor[9] - vetor[8];
            if (dif >= maior_valor) {
                maior_valor = dif;
            } else {
                menor_valor = dif;
            }
        }
    }

    printf("Maior valor: %.2f", maior_valor);
    printf("\nMenor valor: %.2f", menor_valor);


    return 0;
}