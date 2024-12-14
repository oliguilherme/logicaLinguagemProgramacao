#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor_produto, valor_final;
  int forma_pagamento;

  printf("Digite o valor do produto: ");
  scanf("%f", &valor_produto);

  printf("Qual forma de pagamento (1 - vista, 2 - parcelado em 2x, 3 - parcelado em 3x ou mais): ");
  scanf("%d", &forma_pagamento);

  if (forma_pagamento == 1) {
      valor_final = valor_produto * 0.90;
  } else if (forma_pagamento == 2) {
      valor_final = valor_produto;
  } else {
      valor_final = valor_produto * 1.05;
  }

  printf("\nValor final a pagar: R$%.2f\n\n", valor_final);
  
  system("pause");
  return 0;
}