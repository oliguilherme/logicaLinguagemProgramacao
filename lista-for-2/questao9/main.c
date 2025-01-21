#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    
    int entrada, soma, pos, neg, num;
    float media, per_pos, per_neg;

    printf("Informe a quantidade de entrada: ");
    scanf("%d", &entrada);

    for (int i = 1; i <= entrada; i++) {
        printf("numero %d: ", i);
        scamf("%d", &num);

        if (num > 0) {
            pos++;
        }
        if (num < 0) {
            neg++;
        }
        soma+=num;
    }

    media = soma / entrada;
    per_pos

    printf("\nMedia: %.2f\nPercentual positivo: %f", media,  )
    
    return 0;
}