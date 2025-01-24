#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int numero, i;

  printf("Digite um número para ver a sua tabuada (entre 1 e 10): ");
  scanf("%d", &numero);

  if (numero >= 1 && numero <= 10) {
      printf("\nTabuada de %d:\n", numero);
      for (i = 1; i <= 10; i++) {
          printf("%d x %d = %d\n", numero, i, numero * i);
      }
  } else {
      printf("Número inválido! Por favor, escolha um número entre 1 e 10.\n");
  }

  return 0;
}
