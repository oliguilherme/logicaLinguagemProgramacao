#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int contarVogais(char str[], int n) {
    int cont = 0, i = 0;

    for (i; i < n; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            cont++;
        }
    }
    return cont;
}

int contarConsoante(char str[], int n) {
    int cont = 0, i = 0;

    for (i; i < n; i++) {
        if ((str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') && str[i] != ' ' && str[i] != '\0') {
            cont++;
        }
    }
    return cont;
}

int main() {
    system("cls");

    char texto[101];
    int totalVogal, totalConsoante, i = 0;
    fgets(texto, 101, stdin);

    for (i; i < strlen(texto); i++) {
        texto[i] = tolower(texto[i]);
    }

    totalVogal = contarVogais(texto, strlen(texto));
    totalConsoante = contarConsoante(texto, strlen(texto));

    printf("Total de vogais: %d\nTotal de consoantes: %d", totalVogal, totalConsoante);
    
    return 0;
}