#include <stdio.h>
#include <stdlib.h>

int main() {
  float n1, n2, n3;

  printf("\nDigite tres numeros todos distintos separados por espaco: ");
  scanf("%f %f %f", &n1, &n2, &n3);

  if (n1 == n2 || n1 == n3 || n2 == n3) {
    printf("\nOs numeros nao sao todos distintos.\n\n");
  } else {
    if (n1 > n2 && n1 > n3) {
      if (n2 > n3) {
        printf("%.2f > %.2f > %.2f", n1, n2, n3);
      } else {
        printf("%.2f > %.2f > %.2f", n1, n3, n2);
      }
    } else if (n2 > n1 && n2 > n3) {
      if (n1 > n3) {
        printf("%.2f > %.2f > %.2f", n2, n1, n3);
      } else {
        printf("%.2f > %.2f > %.2f", n2, n3, n1);
      }
    } else {
      if (n1 > n2) {
        printf("%.2f > %.2f > %.2f", n3, n1, n2);
      } else {
        printf("%.2f > %.2f > %.2f", n3, n2, n1);
      }
    }
  }

  system("pause");
  return 0;
}
