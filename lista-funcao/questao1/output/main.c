#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularMedia(int vetor[], int n) {
    int i = 0;
    float soma = 0;
    for (i; i < n; i++) {
        soma += vetor[i];
    }
    return soma / n;
}

float calcularDesvioPadrao(int vetor[], int n, float media) {
    int i = 0;
    float soma = 0;

    for (i; i < n; i++) {
        float temp = pow((vetor[i] - media), 2);
        soma += temp;
    }
    
    float mediageral = soma / n;
    float desvioPadrao = sqrt(mediageral);
    
    return desvioPadrao;
}
int main() {
    system("cls");

    int n, i = 0;
    int vetor[n];
    float media, desvio_padrao;

    printf("Informe um tamanho para o vetor: ");
    scanf("%d", &n);

    for (i; i < n; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    media = calcularMedia(vetor, n);
    desvio_padrao = calcularDesvioPadrao(vetor, n, media);

    printf("Media: %.2f\nDesvio padrao: %.2f", media, desvio_padrao);


    return 0;
}