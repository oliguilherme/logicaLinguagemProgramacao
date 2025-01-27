#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int opcao;
    float valor, convertido;

    while (1) {
        printf("Escolha uma opcao:\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Fahrenheit para Celsius\n");
        printf("3. Milhas para Quilometros\n");
        printf("4. Quilometros para Milhas\n");
        printf("5. Dolar para Real\n");
        printf("6. Real para Dolar\n");
        printf("7. Quilogramas para Libras\n");
        printf("8. Libras para Quilogramas\n");
        printf("9. Sair\n");
        scanf("%d", &opcao);

        if (opcao == 9) {
            break;
        }

        printf("Digite o valor a ser convertido:\n");
        scanf("%f", &valor);

        switch (opcao) {
            case 1:
                convertido = valor * 9 / 5 + 32;
                printf("Resultado: %.2f\n", convertido);
                break;
            case 2:
                convertido = (valor - 32) * 5 / 9;
                printf("Resultado: %.2f\n", convertido);
                break;
            case 3:
                convertido = valor * 1.60934;
                printf("Resultado: %.2f\n", convertido);
                break;
            case 4:
                convertido = valor * 0.621371;
                printf("Resultado: %.2f\n", convertido);
                break;
            case 5:
                convertido = valor * 5.0; // Taxa fixa
                printf("Resultado: %.2f\n", convertido);
                break;
            case 6:
                convertido = valor / 5.0; // Taxa fixa
                printf("Resultado: %.2f\n", convertido);
                break;
            case 7:
                convertido = valor * 2.20462;
                printf("Resultado: %.2f\n", convertido);
                break;
            case 8:
                convertido = valor / 2.20462;
                printf("Resultado: %.2f\n", convertido);
                break;
            default:
                printf("Opcao invalida\n");
        }
    }

    return 0;
}
