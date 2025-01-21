#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    
    int idade, count_idade, count_peso, count_altura;
    float altura, peso;

    for (int i = 1; i < 6; i++) {
        printf("Informe idade, altura e peso da pessoa %d: ", i);
        scanf("%d %f %f", &idade, &altura, &peso);

        if (idade > 50) {
            count_idade++;
        }

        if (peso < 60) {
            count_peso++;
        }

        if (altura >+ 1 && altura <= 2) {
            count_altura++;
        }
    }

    printf("\nMais de 50 anos: %d\nMenos de 60kg: %.2fkg\nEntre 1 e 2 metros de altura: %.2f\n\n");
    
    
    return 0;
}