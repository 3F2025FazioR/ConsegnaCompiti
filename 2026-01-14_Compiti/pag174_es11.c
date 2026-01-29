#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, accumulatore = 0;

    printf("Indicare il numero di coppie da generare ");
    scanf("%d", &N);

    double num1[N], num2[N];

    for(int i = 0; i < N; i++) {
        num1[i] = rand() % 100;
        num2[i] = rand() % 100;
        if(num1[i] == num2[i]) {
            accumulatore += 1;
        }

        printf("\nLa coppia %d di numeri generati %.2f e %.2f\n", i+1, num1[i], num2[i]);
    }

    if(accumulatore == 0)
        printf("Non sono state generate coppie uguali tra loro\n");
    else
        printf("Sono state generate %d coppie di numeri uguali tra loro\n", accumulatore);


    system("pause");
    return 0;
}