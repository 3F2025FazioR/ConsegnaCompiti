#include <stdio.h>
#include <stdlib.h>

/*
 * Verifica se il riscaldamento deve accendersi in base alla temperatura media
 */
int main() {
    float limite, temp1, temp2, temp3, media;

    // Input del limite di accensione
    printf("Inserisca il valore limite di accensione del riscaldamento in °C: ");
    scanf("%f", &limite);

    // Input delle tre temperature
    printf("Inserisca le tre temperature registrate: ");
    scanf("%f %f %f", &temp1, &temp2, &temp3);

    // Calcolo della media
    media = (temp1 + temp2 + temp3) / 3.0;

    printf("La media delle temperature è: %.2f°C\n", media);

    // Verifica se il riscaldamento deve accendersi
    if (media < limite) {
        printf("Quindi il riscaldamento si accenderà a breve.\n");
    }
    else {
        printf("Perciò il riscaldamento NON si accenderà.\n");
    }

    system("pause");
    return 0;
}