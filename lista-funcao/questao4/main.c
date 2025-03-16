#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotacionarVetor(int vetor[], int tam, int n, int k) {
    int temp, dif = tam - 1;

    for (int i = 0; i < tam; i++) {
        if (vetor[i] == n) {
            if ((dif - i) >= k){
                temp = vetor[i + k];
                vetor[i + k] = vetor[i];
                vetor[i] = temp;
            } else {
                int indice = ((i + k) - (tam - 1)) - 1;
                temp = vetor[indice];
                vetor[indice] = vetor[i];
                vetor[i] = temp;
            }
        }
    } 
}

int main() {
    system("cls");

    int tam, rotacionado, casa;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Informe qual elemento a ser rotacionado e quantas casas: ");
    scanf("%d %d", &rotacionado, &casa);

    rotacionarVetor(vetor, tam, rotacionado, casa);

    printf("\n\nVetor: ");
    
    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}