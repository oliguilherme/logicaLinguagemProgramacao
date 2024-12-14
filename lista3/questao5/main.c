#include <stdio.h>
#include <stdlib.h>

int main() {
  int l1, l2, l3;

  printf("Digite os tres lados do triangulo: ");
  scanf("%d %d %d", &l1, &l2, &l3);

  if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
      if (l1 == l2 && l2 == l3) {
          printf("Triangulo Equilatero\n");
      } else if (l1 == l2 || l1 == l3 || l2 == l3) {
          printf("Triangulo Isosceles\n");
      } else {
          printf("Triangulo Escaleno\n");
      }
  } else {
      printf("Os valores nao podem formar um triangulo\n");
  }

  system("pause");
  return 0;
}
