#include <stdio.h>
#include <stdlib.h>

void ConvertiOre() {
    int scelta;
    float ore, min, sec;

    printf("Inserisca il numero di ore: ");
    scanf("%f", &ore);

    printf("\nScelga la conversione:\n");
    printf("1 - Minuti\n");
    printf("2 - Secondi\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    switch (scelta) {
        case 1:
            min = ore * 60;
            printf("%.2f ore equivalgono a %.2f minuti.\n", ore, min);
            break;
        case 2:
            sec = ore * 3600;
            printf("%.2f ore equivalgono a %.2f secondi.\n", ore, sec);
            break;
        default:
            printf("Scelta non valida.\n");
    }
}

int main() {
    ConvertiOre();

    system("pause");
    return 0;
}