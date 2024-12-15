#include <stdio.h>
#include <stdlib.h>

int main() {
  float salario, imposto;

  printf("Salario: ");
  scanf("%f", &salario);

  if (salario <= 2000.00) {
    printf("Isento de imposto de renda.\n\n");
  } else if (salario >= 2000.01 && salario <= 3000) {
    printf("Valor a pagar: R$%.2f\n\n", (salario - 2000) * 0.08);
  } else if (salario >= 3000.01 && salario <= 4500) {
    imposto = 1000.0 * 0.08 + ((salario - 3000.0) * 0.18);
    printf("Valor a pagar: R$%.2f\n\n", imposto);
  } else {
    imposto = 1000.0 * 0.08 + 1500 * .18 + ((salario - 4500) * 0.28);
    printf("Valor a pagar: R$%.2f\n\n", imposto);
  }

  system("pause");
  return 0;
}