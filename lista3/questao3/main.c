#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, nota3, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("Media: %.2f\n", media);

  if (media >= 7) {
      printf("Situacao: Aprovado\n");
  } else if (media >= 5 && media < 7) {
      printf("Situacao: Recuperacao\n");
  } else {
      printf("Situacao: Reprovado\n");
  }

  system("pause");
  return 0;
}
