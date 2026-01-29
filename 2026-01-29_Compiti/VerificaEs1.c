#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    do {
        printf("Inserire un numero ");
        scanf("%d", &numero);

        if (numero < 2 || numero > 20) {
            printf("Numero non compreso nell'intervallo 2-20.\n");
            break;
        }

        printf("Multipli di %d minori di 100\n", numero);
        for (int i = numero; i < 100; i += numero) {
            printf("%d ", i);
        }
        printf("\n");
    } while (1);

    system("pause");
    return 0;
}
