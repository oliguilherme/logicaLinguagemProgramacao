#include <stdio.h>
#include <stdlib.h>

int main() {
    float metros, centimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;
    printf("O valor em centimetros eh %.2f\n", centimetros);

    system("pause");
    return 0;
}