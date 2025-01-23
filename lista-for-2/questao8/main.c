#include <stdio.h>
#include <locale.h>

int main() {
    system("cls");

    int i = 1, num_filho, soma_filho = 0;
    float sal, soma_sal = 0, media_sal, media_filho, maior_salario, count_sal, percent;

    for (i; i <= 4; i++) {
        printf("Informe numero de filhos e salario %d: ", i);
        scanf("%d %f", &num_filho, &sal);

        if (i == 1) {
            maior_salario = sal;
        } else {
            if (sal > maior_salario) {
                maior_salario = sal;
            }
        }

        if (sal <= 550) {
            count_sal++;
        }

        soma_filho += num_filho;
        soma_sal += sal;
    }

    media_filho = soma_filho / 4;
    media_sal = soma_sal / 4;
    percent = (count_sal / 4) * 100;


    printf("Meida de filho: %.2f\nMedia de salario: R$%.2f\nPercentual: %.2f\nMaior salario: %.2f\n\n", media_filho, media_sal, percent, maior_salario);
    return 0;
}
