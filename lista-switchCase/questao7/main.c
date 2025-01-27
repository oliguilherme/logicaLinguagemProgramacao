#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int categoria;
  float renda, imposto = 0;

  while (1) {
      printf("Escolha a categoria:\n");
      printf("1. Trabalhador formal\n");
      printf("2. Autonomo\n");
      printf("3. Empresario\n");
      printf("4. Sair\n");
      scanf("%d", &categoria);

      if (categoria == 4) {
          break;
      }

      printf("Digite a renda anual:\n");
      scanf("%f", &renda);

      switch (categoria) {
          case 1:
              if (renda <= 30000) {
                  imposto = 0;
              } else if (renda <= 70000) {
                  imposto = (renda - 30000) * 0.15;
              } else {
                  imposto = 40000 * 0.15 + (renda - 70000) * 0.25;
              }
              break;
          case 2:
              if (renda <= 20000) {
                  imposto = 0;
              } else if (renda <= 50000) {
                  imposto = (renda - 20000) * 0.10;
              } else {
                  imposto = 30000 * 0.10 + (renda - 50000) * 0.20;
              }
              break;
          case 3:
              if (renda <= 50000) {
                  imposto = 0;
              } else if (renda <= 100000) {
                  imposto = (renda - 50000) * 0.20;
              } else {
                  imposto = 50000 * 0.20 + (renda - 100000) * 0.30;
              }
              break;
          default:
              printf("Categoria invalida\n");
              continue;
      }

      printf("Imposto devido: %.2f\n", imposto);
  }

  return 0;
}
