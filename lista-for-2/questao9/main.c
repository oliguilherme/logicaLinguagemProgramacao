#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    
    int entrada, pos = 0, neg = 0, num, i = 1;
    float media, per_pos, per_neg, soma = 0;

    printf("Informe a quantidade de entrada: ");
    scanf("%d", &entrada);

    for (i; i <= entrada; i++) {
        printf("numero %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            pos++;
        }
        if (num < 0) {
            neg++;
        }
        soma+=num;
    }

    media = soma / entrada;
    per_pos = (pos / entrada) * 100;
    per_neg = (neg / entrada) * 100;

    printf("soma: %.2f", soma);

    printf("\nMedia: %.2f\nPercentual positivo: %.2f\nPercentual negativo: %.2f\nQuantidade de positivos: %d\nQuantidade de negativos: %d", media, per_pos, per_neg, pos, neg);
    
    return 0;
}