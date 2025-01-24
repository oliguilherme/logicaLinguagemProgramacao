#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  char codigo;
  float valor, total_vista = 0, total_prazo = 0, total_geral = 0;
  int i;

  for (i = 1; i <= 10; i++) {
      printf("Digite o código da transação (V para à vista, P para a prazo): ");
      scanf(" %c", &codigo);
      printf("Digite o valor da transação: ");
      scanf("%f", &valor);

      switch (codigo) {
          case 'V': case 'v':
              total_vista += valor;
              break;
          case 'P': case 'p':
              total_prazo += valor;
              break;
          default:
              printf("Código inválido! Transação ignorada.\n");
              break;
      }

      total_geral += valor;
  }

  printf("\nResumo das transações:\n");
  printf("Total das compras à vista: R$ %.2f\n", total_vista);
  printf("Total das compras a prazo: R$ %.2f\n", total_prazo);
  printf("Total geral das compras: R$ %.2f\n", total_geral);

  return 0;
}
