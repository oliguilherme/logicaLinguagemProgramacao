#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    int vetor[6], i = 0, j = 5;

    for (i; i < 6; i++ ) {
        printf("informe o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (j; j >= 0; j--) {
        printf("%d ", vetor[j]);
    }

    return 0;
}