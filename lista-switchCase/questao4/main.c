#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int codigo, quantidade;
    float preco;

    printf("Digite o codigo do item:\n");
    scanf("%d", &codigo);

    printf("Digite a quantidade:\n");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 1:
            preco = 5.0;
            break;
        case 2:
            preco = 6.0;
            break;
        case 3:
            preco = 7.0;
            break;
        case 4:
            preco = 8.0;
            break;
        case 5:
            preco = 9.0;
            break;
        default:
            printf("Codigo invalido\n");
            return 0;
    }

    printf("Valor total: %.2f\n", preco * quantidade);
    return 0;
}

