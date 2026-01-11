#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Inserire quanti numeri stampare: ");
    scanf("%d", &N);

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            printf("%d ", 2 * i);
        }
    }
    else {
        printf("Errore: il numero deve essere maggiore di 0.\n");
        return 1;
    }

    printf("\n");
    system("pause");
    return 0;
}