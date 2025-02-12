#include <stdio.h>
#include <stdlib.h> 

int main() {
  system("cls");
  float nota, soma = 0;
  int quantidade = 0;

  printf("Digite notas de alunos (entre 0 e 10). Digite um numero negativo para encerrar:\n");
  while (1) {
      scanf("%f", &nota);
      if (nota < 0) {
          break;
      }
      if (nota >= 0 && nota <= 10) {
          soma += nota;
          quantidade++;
      } else {
          printf("Nota invalida. Digite uma nota entre 0 e 10.\n");
      }
  }

  if (quantidade > 0) {
      float media = soma / quantidade;
      printf("A media das notas e: %.2f\n", media);
  } else {
      printf("Nenhuma nota valida foi informada.\n");
  }

  return 0;
}