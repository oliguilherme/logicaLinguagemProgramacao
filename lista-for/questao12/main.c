#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");

  int x, y, aux = 0;

  printf("Informe o total de numeros e a quantidade de colunas: ");
  scanf("%d %d", &x, &y);

  for (int i = 1; i <= x; i++) {
    printf("%d", i);
    printf(" ");
    aux++;
    if ((aux % y) == 0) {
      printf("\n");
    }
  }
}