#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, valore = 1;

    printf("Indicare il numero positivo di valori da generare ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Non puoi generare valori nulli o negativi\n");

        system("pause");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", valore);
        valore = valore * 3;
    }

    system("pause");
    return 0;
}