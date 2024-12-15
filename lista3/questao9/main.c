#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota;
  int faltas;

  printf("Digite a nota e o numero de faltas do aluno: ");
  scanf("%f %d", &nota, &faltas);

  if (faltas > 20) {
      if (nota >= 9.0) {
          printf("Conceito: B\n");
      } else if (nota >= 7.5) {
          printf("Conceito: C\n");
      } else if (nota >= 5.0) {
          printf("Conceito: D\n");
      } else {
          printf("Conceito: E\n");
      }
  } else {
      if (nota >= 9.0) {
          printf("Conceito: A\n");
      } else if (nota >= 7.5) {
          printf("Conceito: B\n");
      } else if (nota >= 5.0) {
          printf("Conceito: C\n");
      } else {
          printf("Conceito: D\n");
      }
  }

  system("pause");
  return 0;
}
