#include <stdio.h>
#include <stdlib.h>

int main() {
    int limit, num, count = 0;

    printf("Inserire un numero limite di prove: ");
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++) {
        printf("Inserire un numero: ");
        scanf("%d", &num);

        if (num % 7 == 0) {
            count++;
        }
    }

    printf("\nHai inserito %d numeri multipli di 7 su %d tentativi.\n", count, limit);

    if (count == 0) {
        printf("Nessun multiplo di 7 inserito.\n");
    }

    system("pause");
    return 0;
}