#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, media, nota2;

  printf("Informe a primeira nota e a media: ");
  scanf("%f %f", &nota1, &media);

  nota2 = (2.0 * media) - nota1;

  printf("A segunda nota eh: %.2f", nota2);
  
  system("pause");
  return 0;
}