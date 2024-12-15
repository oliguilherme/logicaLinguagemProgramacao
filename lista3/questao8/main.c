#include <stdio.h>
#include <stdlib.h>

int main() {
  float peso, altura;

  printf("Digite o peso em kg e altura em metros: ");
  scanf("%f %f", &peso, &altura);

  if (altura < 1.20) {
    if (peso <= 60) {
      printf("Classificacao: A");
    } else if (peso > 60 && peso <= 90) {
      printf("Classificacao: D");
    } else {
      printf("Classificacao: G");
    }
  } else if (altura > 1.20 && altura <= 1.70) {
    if (peso <= 60) {
      printf("Classificação: B");
    } else if (peso > 60 && peso <= 90) {
      printf("Classificacao: E");
    } else {
      printf("Classificacao: H");
    }
  } else {
    if (peso <= 60) {
      printf("Classificação: C");
    } else if (peso > 60 && peso <= 90) {
      printf("Classificacao: F");
    } else {
      printf("Classificacao: I");
    }
  }

  system("pause");
  return 0;
}