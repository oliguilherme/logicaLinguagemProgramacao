#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    int a, b, c, qnt, contA = 0, contB = 0, contC = 0, i = 0;

    printf("Informe os valores de A, B e C na ordem: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &qnt);

    int num[qnt];

    for (i; i < qnt; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] == a) {
            contA++;
        } else if (num[i] == b) {
            contB++;
        } else {
            contC++;
        }
    }

    printf("Vezes em que apareceu A (%d): %d\nVezes em que apareceu B (%d): %d\nVezes em que apareceu C (%d): %d\n", a, contA, b, contB, c, contC);

    return 0;
}