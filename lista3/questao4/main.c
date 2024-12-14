#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;

  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 % 2 == 0 && num2 % 2 == 0) {
      printf("Ambos sao pares\n");
  } else if (num1 % 2 != 0 && num2 % 2 != 0) {
      printf("Ambos sao ímpares\n");
  } else {
      printf("Um eh par e o outro eh impar\n");
  }

  system("pause");
  return 0;
}
