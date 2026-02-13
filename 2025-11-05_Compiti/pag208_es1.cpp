#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int scelta = 0;
    char figura[20];
    double area = 0, base = 0, alteza = 0, lato = 0, diaMag = 0, diaMin = 0;

    do {
        printf("Scegliere la figura e scrivere un numero associato alla tua scelta: \n");
        printf("1 - TRIANGOLO \n");
        printf("2 - QUADRATO \n");
        printf("3 - RETTANGOLO \n");
        printf("4 - ROMBO \n");
        printf("5 - Esci \n");

        scanf("%d", &scelta);

        if (scelta == 1)
        {
            strcpy(figura, "TRIANGOLO");
            printf("Inserire la base: ");
            scanf("%lf", &base);
            printf("Inserire l'altezza: ");
            scanf("%lf", &alteza);
            area = (base * alteza) / 2;
            printf("Area del %s=%.2f\n", figura, area);
        }
        else if (scelta == 2)
        {
            strcpy(figura, "QUADRATO");
            printf("Inserire il Lato: ");
            scanf("%lf", &lato);
            area = lato * lato;
            printf("Area del %s=%.2f\n", figura, area);
        }
        else if (scelta == 3)
        {
            strcpy(figura, "RETTANGOLO");
            printf("Inserire la Base: ");
            scanf("%lf", &base);
            printf("Inserire l'altezza: ");
            scanf("%lf", &alteza);
            area = base * alteza;
            printf("Area del %s=%.2f\n", figura, area);
        }
        else if (scelta == 4)
        {
            strcpy(figura, "ROMBO");
            printf("Inserire diagonale minore: ");
            scanf("%lf", &diaMin);
            printf("Inserire diagonale maggiore: ");
            scanf("%lf", &diaMag);
            area = (diaMin * diaMag) / 2;
            printf("Area del %s=%.2f\n", figura, area);
        }
        else if (scelta == 5)
        {
            printf("Uscire dal programma.\n");
        }
        else
        {
            printf("Scelta non valida, riprovare.\n");
        }
    } while (scelta != 5);

    return 0;
}