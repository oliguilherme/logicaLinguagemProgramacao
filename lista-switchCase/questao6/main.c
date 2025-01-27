#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  system("cls");
  float a, b, c, delta, x1, x2;
  int deltaClassificado;

  printf("Digite o coeficiente a:\n");
  scanf("%f", &a);

  printf("Digite o coeficiente b:\n");
  scanf("%f", &b);

  printf("Digite o coeficiente c:\n");
  scanf("%f", &c);

  delta = b * b - 4 * a * c;

  // Classificando o delta
  if (delta > 0) {
      deltaClassificado = 1;  // Raízes reais e distintas
  } else if (delta == 0) {
      deltaClassificado = 0;  // Raiz real e única
  } else {
      deltaClassificado = -1; // Raízes complexas
  }

  // Usando switch para lidar com os diferentes casos de delta
  switch (deltaClassificado) {
      case 1:
          x1 = (-b + sqrt(delta)) / (2 * a);
          x2 = (-b - sqrt(delta)) / (2 * a);
          printf("As raizes sao reais e distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
          break;
      case 0:
          x1 = -b / (2 * a);
          printf("A raiz e real e unica: x = %.2f\n", x1);
          break;
      case -1:
          printf("As raizes sao complexas\n");
          break;
      default:
          printf("Erro: valor de delta inválido.\n");
          break;
  }

  return 0;
}
