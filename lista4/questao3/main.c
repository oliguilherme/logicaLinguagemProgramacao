#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;

  printf("Informe dois numeros inteiros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 >= num2) {
    if (num1 % num2 == 0) {
      printf("Sao multiplos");
    } else {
      printf("Nao sao multiplos");
    }
  } else {
    if (num2 % num1 == 0) {
      printf("Sao multiplos");
    } else {
      printf("Nao sao multiplos");
    }
  }

  system("pause");
  return 0;
}