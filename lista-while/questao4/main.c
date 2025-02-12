#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    system("cls");
    int numero_correto, palpite;
    srand(time(NULL));
    numero_correto = (rand() % 100) + 1;

    printf("Tente adivinhar o numero (entre 1 e 100):\n");
    while (1) {
        scanf("%d", &palpite);
        if (palpite == numero_correto) {
            printf("Parabens! Voce acertou.\n");
            break;
        } else if (palpite < numero_correto) {
            printf("O numero correto e maior. Tente novamente:\n");
        } else {
            printf("O numero correto e menor. Tente novamente:\n");
        }
    }

    return 0;
}
