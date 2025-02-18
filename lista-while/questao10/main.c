#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  
  int n, i = 1;
  float soma = 0.0;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);

  while (i <= n) {
      soma += 1.0 / i;
      i++;
  }

  printf("Soma dos primeiros %d termos da serie harmonica: %.5f\n", n, soma);

  return 0;
}