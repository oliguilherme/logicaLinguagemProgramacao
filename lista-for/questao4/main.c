#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int count;
    float media, preco, soma = 0, aux_menor, aux_maior;

    for (int i = 1; i <= 3; i++) {
        printf("\nInforme o valor da %da compra: ", i);
        scanf("%f", &preco);
        
        if (i == 1) {
            aux_menor = preco;
            aux_maior = preco;
        } else {
            if (preco <= aux_menor) {
                aux_menor = preco;
            } 
            if (preco > aux_maior) {
                aux_maior = preco;
            }
        }
        soma += preco;
        count++;
    }

    media = soma / count;

    printf("Maior valor: %.2f\n", aux_maior);
    printf("Menor valor: %.2f", aux_menor);
    printf("\nA media eh: %.2f\n\n", media);
    

}