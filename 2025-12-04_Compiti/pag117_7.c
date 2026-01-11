#include <stdio.h>
#include <stdlib.h>

/*
 * Verifica se un numero rientra nell'intervallo [-5, 10]
 */
void VerificaIntervallo() {
    float num;

    printf("Inserisca un numero: ");
    scanf("%f", &num);

    if (num >= -5 && num <= 10) {
        printf("OK!\nIl numero %.2f è nell'intervallo [-5, 10]\n", num);
    }
    else {
        printf("Il numero %.2f non è nell'intervallo [-5, 10]\n", num);
    }
}

int main() {
    VerificaIntervallo();

    system("pause");
    return 0;
}