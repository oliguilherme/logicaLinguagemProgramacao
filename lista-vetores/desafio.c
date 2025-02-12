#include <stdio.h>
#include <stdlib.h>  

int main() {
  system("cls");
  int qnt = 0, p = 0, i = 0, a = 0, b = 0, m = 0, n = 0;

  printf("Total de numeros: ");
  scanf("%d", &qnt);

  int vetor[qnt];

  for (int j = 0; j < qnt; j++) {
    printf("Informe numero %d: ", j + 1);
    scanf("%d", &vetor[j]);

    if (vetor[j] % 2 == 0) {
      p++;
    } else {
      i++;
    }
  }

  int par[p], impar[i];

  for (int k = 0; k < qnt; k++) {
    if (vetor[k] % 2 == 0) {
      par[a++] = vetor[k];
    } else {
      impar[b++] = vetor[k];
    }
  }

  printf("\nPares: ");
  while (m < p) {
    printf("%d ", par[m++]);
  }

  printf("\nImpares: ");
  while (n < i) {
    printf("%d ", impar[n++]);
  }

  return 0;
}