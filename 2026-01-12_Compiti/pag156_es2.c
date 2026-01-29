#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, max;
    int c = 1;

    printf("Inserire il numero 1 ");
    scanf("%d", &num);
    max = num;

    while (c < 4) {
        printf("Inserire il numero %d ", c + 1);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        c++;
    }

    printf("Il valore massimo e' %d\n", max);

    return 0;
}
