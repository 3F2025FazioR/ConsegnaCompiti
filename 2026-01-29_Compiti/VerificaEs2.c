#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float numero, massimo, somma = 0;
    float percentuale;

    printf("Inserire quanti numeri generare ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Il numero deve essere positivo\n");
        system("pause");
    }

    for (int i = 0; i < n; i++) {
        printf("Inserire numero %d ", i + 1);
        scanf("%f", &numero);

        if (i == 0) {
            massimo = numero;
        } else if (numero > massimo) {
            massimo = numero;
        }

        somma += numero;
    }

    percentuale = (massimo / somma) * 100;

    printf("\nIl massimo %f\n", massimo);
    printf("La somma totale %f\n", somma);
    printf("La percentuale del massimo %.2f%%\n", percentuale);

    system("pause");
    return 0;
}
