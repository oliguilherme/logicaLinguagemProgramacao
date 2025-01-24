#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  char letra;

  printf("Digite uma letra: ");
  scanf("%c", &letra);

  switch (letra) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
          printf("A letra %c é uma vogal.\n", letra);
          break;
      default:
          printf("A letra %c é uma consoante.\n", letra);
          break;
  }

  return 0;
}
