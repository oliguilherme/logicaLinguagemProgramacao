#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int count;
    float media, soma, valor, aux_menor, aux_maior;

    for (int i = 1; i <= 3; i++) {
        printf("\nInforme o valor do numero %d", i);
        scanf("%f", &valor);
        
        if (i == 1) {
            aux_menor = valor;
            aux_maior = valor;
        } else {
            if (valor <= aux_menor) {
                aux_menor = valor;
            } 
            if (valor > aux_maior) {
                aux_maior = valor;
            }
        }
        soma += valor;
        count++;
    }

    media = soma / count;

    printf("Maior valor: %.2f\n", aux_maior);
    printf("Menor valor: %.2f", aux_menor);
    printf("\nA media eh: %.2f\n\n", media);
    
    return 0;
}