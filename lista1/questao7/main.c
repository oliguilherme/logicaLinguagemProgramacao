#include <stdio.h>
#include <stdlib.h>

int main() {
  float preco, quantidade, total;

  printf("Digite o preco do produto e a quantidade comprada: ");
  scanf("%f %f", &preco, &quantidade);

  total = preco * quantidade;
  printf("O valor total a ser pago eh %.2f\n", total);

  system("pause");
  return 0;
}