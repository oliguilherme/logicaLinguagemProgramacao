#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, alturaTri, area;

    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &base, &alturaTri);

    area = (base * alturaTri) / 2;
    printf("A area do triangulo eh %.2f\n", area);

    system("pause");
    return 0;
}
