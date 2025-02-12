#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int numero;

  printf("Digite um numero para iniciar a contagem regressiva:\n");
  scanf("%d", &numero);

  while (numero >= 0) {
      printf("%d\n", numero);
      numero--;
  }

  return 0;
}
