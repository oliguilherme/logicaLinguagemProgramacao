#include <stdio.h>
#include <stdlib.h>  

int main() {
  system("cls");
  int numero, soma = 0;

  printf("Digite numeros inteiros para somar (digite 0 para parar):\n");
  while (1) {
      scanf("%d", &numero);
      if (numero == 0) {
          break;
      }
      soma += numero;
  }

  printf("A soma dos numeros digitados e: %d\n", soma);

  return 0;
}
