#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Inserisca tre coefficienti numerici dell'equazione di secondo grado separati da uno spazio: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a != 0) {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Le soluzioni sono: %.2f e %.2f\n", x1, x2);
        }
        else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("La soluzione dell'equazione è: %.2f\n", x1);
        }
        else {
            printf("L'equazione non ha radici reali.\n");
        }
    }
    else {
        printf("L'equazione non è di secondo grado.\n");
    }

    system("pause");
    return 0;
}