#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, sommaEsatta, rispostaUtente;

    printf("Inserisci il primo numero intero (A): ");
    if (scanf("%d", &num1) != 1) {
        printf("Input non valido.\n");
        return 1;
    }

    printf("Inserisci il secondo numero intero (B): ");
    if (scanf("%d", &num2) != 1) {
        printf("Input non valido.\n");
        return 1;
    }

    sommaEsatta = num1 + num2;

    printf("Esegui mentalmente la somma di %d + %d\n", num1, num2);

    printf("Inserisca il tuo risultato: ");
    if (scanf("%d", &rispostaUtente) != 1) {
        printf("Input non valido.\n");
        return 1;
    }

    if (rispostaUtente == sommaEsatta) {
        printf("\nCongratulazioni, hai indovinato al primo tentativo!!\n");
    }
    else {
        printf("\nHai sbagliato, prova ancora.\n");

        printf("Inserisca il nuovo risultato: ");
        if (scanf("%d", &rispostaUtente) != 1) {
            printf("Input non valido.\n");
            return 1;
        }

        if (rispostaUtente == sommaEsatta) {
            printf("\nBravino (per modo di dire), hai indovinato al secondo tentativo...\n");
        }
        else {
            printf("\nTi serve un ripasso di matematica.\n");
            printf("(La somma corretta è: %d)\n", sommaEsatta);
        }
    }

    system("pause");
    return 0;
}