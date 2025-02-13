#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");
    float nota1[10], nota2[10], media_vetor[10], n1, n2, media = 0;
    int i = 0, j = 0;
    
    for (i; i < 10; i++) {
        printf("Informe as notas 1 e 2 do aluno %d: ", i + 1);
        scanf("%f %f", &n1, &n2);
        nota1[i] = n1;
        nota2[i] = n2;
        media = ((n1 * 2) + (n2 * 3)) / 5;
        media_vetor[i] = media;
    }

    printf("Medias: \n");

    for (j; j < 10; j++) {
        printf("%.2f ", media_vetor[j]);
    }

    return 0;
}