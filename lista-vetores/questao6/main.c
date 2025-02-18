#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int i = 0, posicaoMaiorValor, posicaoMenorValor;
    float vetor[5], maiorValor, menorValor;

    for (i; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);

        if (i == 0) {
            maiorValor = vetor[i];
            menorValor = vetor[i];
        } else {
            if (vetor[i] >= maiorValor) {
                maiorValor = vetor[i];
                posicaoMaiorValor = i;
            } else {
                menorValor = vetor[i];
                posicaoMenorValor = i;
            }
        }
    }

    printf("\nMaior valor: %.2f\nSua posicao: %d", maiorValor, posicaoMaiorValor);
    printf("\nMenor valor: %.2f\nSua posicao: %d", menorValor, posicaoMenorValor);

    return 0;
}