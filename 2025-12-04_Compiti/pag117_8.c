#include <stdio.h>
#include <stdlib.h>

/*
 * Verifica se tre numeri sono in progressione aritmetica
 */
int main() {
    float a, b, c;

    printf("Inserisca tre numeri: ");
    scanf("%f %f %f", &a, &b, &c);

    // Una progressione aritmetica ha differenza costante: b - a = c - b
    if ((b - a) == (c - b)) {
        printf("I numeri sono in progressione aritmetica.\n");
    }
    else {
        printf("I numeri NON sono in progressione aritmetica.\n");
    }

    system("pause");
    return 0;
}