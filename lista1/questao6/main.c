#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, nota3, media;

  printf("Digite as tres notas do aluno: ");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3) / 3;
  printf("A media das notas eh %.2f\n", media);

  system("pause");
  return 0;
}