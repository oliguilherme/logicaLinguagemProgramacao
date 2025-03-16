#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intersecao(int v1[], int v2[], int inter[], int n1, int n2, int *k) {
    *k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (v1[i] == v2[j]) {
                inter[*k] = v1[i];
                (*k)++;
            }
        }
    }
}

int main() {
    system("cls");
    int m, n, i = 0, j = 0, tam;
    printf("Informe o tamanho dos dois vetores: ");
    scanf("%d %d", &m, &n);

    int vetor1[m], vetor2[n];

    for (i = 0; i < m; i++) { 
        printf("Informe numero %d do vetor 1: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    for (j = 0; j < n; j++) { 
        printf("Informe numero %d do vetor 2: ", j + 1);
        scanf("%d", &vetor2[j]);
    }

    tam = (m < n) ? m : n;

    int vetor3[tam];

    intersecao(vetor1, vetor2, vetor3, m, n, &tam);

    printf("Intersecao: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}