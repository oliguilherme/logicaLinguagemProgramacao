#include <stdio.h>
#include <stdlib.h>

int main() {
    int hora_partida, min_partida, hora_chegada, min_chegada;
    int min_total_chegada, min_total_partida, diferenca_min, diferenca_hora, min_tratado, hora_tratado;
    float custo;

    printf("Digite a hora e o minuto de chegada (hh mm): ");
    scanf("%d %d", &hora_chegada, &min_chegada);
    printf("\nDigite a hora e o minuto de chegada (hh mm): ");
    scanf("%d %d", &hora_partida, &min_partida);

    min_total_chegada = (hora_chegada * 60) + min_chegada;
    min_total_partida = (hora_partida * 60) + min_partida;

    diferenca_min = min_total_partida - min_total_chegada;
    diferenca_hora = diferenca_min / 60;

    if (diferenca_min < 0) {
        min_tratado = min_total_partida + (24 * 60) - min_total_chegada;
        diferenca_min = min_tratado; 
        diferenca_hora = diferenca_min / 60;
    }

    if (diferenca_min <= 60) {
        printf("\n\nCusto a pagar: R$%.2f\n\n", 1.00);
    } else if (diferenca_min > 60 && diferenca_min <= 120) {
        printf("\n\nCusto a pagar: R$%.2f\n\n", 2.00);
    } else if (diferenca_min > 121 && diferenca_min <= 180) {
        printf("\n\nCusto a pagar: R$%.2f\n\n", 1.40 * 3.00);
    } else if (diferenca_min > 181 && diferenca_min <= 240) {
        printf("\n\nCusto a pagar: R$%.2f\n\n", 1.40 * 4);
    } else if (diferenca_min >= 300) {
        if (diferenca_hora % 60 !=  0) {
            printf("\n\nCusto a pagar:R$%.2f\n\n", (2.00 * diferenca_hora) + 1.00);
        } else {
             printf("\n\nCusto a pagar:R$%.2f\n\n", 2.00 * diferenca_hora);
        }
    }




    


    return 0;
}