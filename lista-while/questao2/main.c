#include <stdio.h>
#include <stdlib.h>  

int main() {
  system("cls");
  int senha;

  printf("Digite a senha correta (Senha predefinida: 1234):\n");
  while (1) {
      scanf("%d", &senha);
      if (senha == 1234) {
          printf("Acesso permitido.\n");
          break;
      } else {
          printf("Senha incorreta. Tente novamente:\n");
      }
  }

  return 0;
}