#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int voti[100];
    int maxSuff = -1;
    int minInsuff = 11;

    printf("Indicare quanti voti generare ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        voti[i] = rand() % 11;
        printf("Voto %d %d\n", i+1, voti[i]);
    }

    for (int i = 0; i < n; i++) {
        if (voti[i] >= 6) {
            if (voti[i] > maxSuff)
                maxSuff = voti[i];
        } else {
            if (voti[i] < minInsuff)
                minInsuff = voti[i];
        }
    }

    if (maxSuff == -1) {
        printf("Non ci sono voti sufficienti\n");
    } else {
        printf("Il voto massimo sufficiente e' %d\n", maxSuff);
    }

    if (minInsuff == 11) {
        printf("Non ci sono voti insufficienti\n");
    } else {
        printf("Il voto minimo insufficiente e' %d\n", minInsuff);
    }

    system("pause");
    return 0;
}
