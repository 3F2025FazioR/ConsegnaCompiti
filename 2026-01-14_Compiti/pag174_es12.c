#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, K;
    int x;
    int maggiore = 0, minore = 0, uguale = 0;

    printf("Indicare quanti numeri generare ");
    scanf("%d", &N);

    printf("Indicare un numero da verificare ");
    scanf("%d", &K);

    for (int i = 0; i < N; i++) {
        printf("Inserire un numero ");
        scanf("%d", &x);

        if (x > K) {
            maggiore++;
        } else if (x < K) {
            minore++;
        } else {
            uguale++;
        }
    }

    printf("Numeri maggiori %d\n", maggiore);
    printf("Numeri minori %d\n", minore);
    printf("Numeri uguali %d\n", uguale);

    system("pause");
    return 0;
}
