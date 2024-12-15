#include <stdio.h>
#include <stdlib.h>

int main() {
    float horasTrabalhadas, valorHora, salario;

    printf("Digite a quantidade de horas trabalhadas e o valor por hora: ");
    scanf("%f %f", &horasTrabalhadas, &valorHora);

    salario = horasTrabalhadas * valorHora;
    printf("O salario total eh %.2f\n", salario);

    system("pause");
    return 0;
}