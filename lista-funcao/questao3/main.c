#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intersecao(int v1[], int v2[], int inter[], int n1, int n2, int n3) {
    int i = 0, j = 0, k = 0;

    for (i, j; i < n1, j < n2; i++, j++) {
        if (v1[i])
    }
}

int main() {
    system("cls");
    int m, n, i = 0, j = 0, tam;
    printf("Informe o tamanho dos dois vetores: ");
    scanf("%d %d", &m, &n);

    int vetor1[m], vetor2[n];

    for (i, j; i < m, j < n; i++, j++) {
        if (i < m) {
            printf("Informe numero %d do vetor 1: ", i + 1);
            scanf("%d", &vetor1[m]);
        }
       if (j < n) {
        printf("Informe numero %d do vetor 2: ", j + 1);
        scanf("%d", &vetor2[n]);
       }
    }

    if (m >= n) {
        tam = n;
    } else {
        tam = n;
    }

    int vetor3[tam];

    intersecao(vetor1, vetor2, vetor3, m, n, tam);



    return 0;
}