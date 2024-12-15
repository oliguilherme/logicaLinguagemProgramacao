#include <stdio.h>
#include <stdlib.h>

int main() {
    double n1, n2, soma;

    printf("Digite dois numeros reais: ");
    scanf("%lf %lf", &n1, &n2);

    soma = n1 + n2;
    printf("A soma de %.2f e %.2f eh %.2f\n", n1, n2, soma);

    system("pause");
    return 0;
}