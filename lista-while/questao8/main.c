#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int n;

  printf("Digite um numero inteiro positivo:\n");
  scanf("%d", &n);

  while (n != 1) {
      printf("%d ", n);
      if (n % 2 == 0) {
          n /= 2;
      } else {
          n = 3 * n + 1;
      }
  }
  printf("1\n");

  return 0;
}