#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int x, z, i, j, soma;

    printf("Informe a quantidade de vezes e o valor: ");
    scanf("%d %d", &z, &x);

    if ((x % 2) != 0) {
        x++;
    }

    for (i = 1; i <= z; i++) {
        soma = 0;
        for (j = 1; j < 10; j+=2) {
            printf("%d ", x);
            soma += x;
            x += 2;
        }
        printf("\nA soma é: %d", soma);
    }
}