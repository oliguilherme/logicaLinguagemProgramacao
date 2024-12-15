#include <stdio.h>
#include <stdlib.h>

int main() {
  int quant_termos;

  printf("\n\t------------------Calculando o somatório S = 1 - 1 + 1 - 1 + 1 - 1 +... para n termos------------------\n\n");

  printf("Informe a quantidade de termos (entre 1 e 1000): ");
  scanf("%d", &quant_termos);
  
  if (quant_termos >= 1 && quant_termos <= 1000) {
    if (quant_termos % 2 == 0) {
      printf("Resultado: %d\n\n", 1);
    } else {
      printf("Resultado: %d\n\n", 0);
    }
  } else {
    printf("Quantidade de termos está fora do esperado.\n\n");
  }

  system("pause");
  return 0;
}