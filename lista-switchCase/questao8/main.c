#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int quantidade;
  float preco_unitario, total, desconto;

  printf("Digite a quantidade de unidades compradas:\n");
  scanf("%d", &quantidade);

  printf("Digite o preco unitario do produto:\n");
  scanf("%f", &preco_unitario);

  total = preco_unitario * quantidade;

  switch (quantidade) {
      case 0 ... 10:
          desconto = 0;
          break;
      case 11 ... 20:
          desconto = total * 0.05;
          break;
      case 21 ... 50:
          desconto = total * 0.10;
          break;
      default:
          desconto = total * 0.20;
  }

  printf("Valor total com desconto: %.2f\n", total - desconto);

  return 0;
}
