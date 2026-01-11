#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, x;

    printf("Inserire il coefficiente della x (quindi 'a'): ");
    scanf("%f", &a);
    printf("Inserire il valore della b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("L'equazione data ha infinite soluzioni.\n");
        }
        else {
            printf("L'equazione data non ha soluzioni.\n");
        }
    }
    else {
        x = -b / a;
        printf("La soluzione dell'equazione è x = %.3f\n", x);
    }

    system("pause");
    return 0;
}