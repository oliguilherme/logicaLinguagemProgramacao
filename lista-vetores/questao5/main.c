#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int vetorIdade[5], soma = 0, i = 0, j = 0;
    float desvioMedia[5], media;

    for (i; i < 5; i++) {
        printf("Informe a idade %d: ", i + 1);
        scanf("%d", &vetorIdade[i]);

        soma += vetorIdade[i];
    }

    media = soma / 5;
    printf("\nA media eh: %.2f\n\n", media);
    printf("O desvio em relacao a media sao os seguintes: ");

    for (j; j < 5; j++) {
        desvioMedia[j] = media - vetorIdade[j];
        printf("%.2f ", desvioMedia[j]);
    }
}