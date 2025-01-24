#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
    int i;

    printf("Tabuada de 7:\n");
    for (i = 1; i <= 10; i++) {
        printf("7 x %d = %d\n", i, 7 * i);
    }

    printf("\nTabuada de 8:\n");
    for (i = 1; i <= 10; i++) {
        printf("8 x %d = %d\n", i, 8 * i);
    }

    printf("\nTabuada de 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("10 x %d = %d\n", i, 10 * i);
    }

    return 0;
}
