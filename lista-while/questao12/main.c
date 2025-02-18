#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int n, soma = 0;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);

  while (n > 0) {
      soma += n % 10;
      n /= 10;
  }

  printf("Soma dos digitos: %d\n", soma);

  return 0;
}
