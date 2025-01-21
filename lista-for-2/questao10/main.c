#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    
    int num, fatorial = 1;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Resultado: 1");
    } else {
        for (int i = 1; i <= num; i++) {
        fatorial = fatorial * i;
    }
    }


    printf("\n\n%d\n", fatorial);
    
    return 0;
}