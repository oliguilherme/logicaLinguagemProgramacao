#include <stdio.h>
#include <stdlib.h>

int main() {
  float peso, altura, imc;

  printf("Digite o peso em kg e altura em metros: ");
  scanf("%f %f", &peso, &altura);

  imc = peso / (altura * altura);

  printf("\nIMC: %.2f\n", imc);

  if (imc < 18.5) {
      printf("Classificacao: Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 25) {
      printf("Classificacao: Peso normal\n");
  } else if (imc >= 25 && imc < 30) {
      printf("Classificacao: Sobrepeso\n");
  } else {
      printf("Classificacao: Obesidade\n");
  }

  system("pause");
  return 0;
}
