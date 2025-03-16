#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substituirCaracter(char str[], char antigo, char novo) {
    int tam = strlen(str);

    for (int i = 0; i < tam; i++) {
        if (str[i] == antigo) {
            str[i] = novo;
        }
    }
}

int main() {
    system("cls");

    char antigo, novo;
    
    char str[1001];

    fgets(str, 1001, stdin);
    printf("\nInforme o char antigo e char novo: ");
    scanf(" %c %c", &antigo, &novo);

    substituirCaracter(str, antigo, novo);

    printf(str);
    return 0;
}