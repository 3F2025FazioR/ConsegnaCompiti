#include <stdio.h>
#include <stdlib.h>
#define nrMax 20
#define ncMax 30

void stampaPerRighe(){
    int mat[nrMax][ncMax], nr, nc;
    int r, c;
    FILE *f;
    f=fopen("numeri.txt", "r");
    if (f==NULL)
        printf("Errore nell'apertra del file\n");
    else {
            fscanf(f,"%d" "%d" , &nr, &nc);
            for (r=0; r<nr; r++)
                for (c=0; c<nc;c++)
                    fscanf(f,"%d", &mat[r][c]);
    
    }
    fclose(f);
    printf("matrice di %d righe e %d colonne per righe\n" );
    printf(nr,nc);
    for (r=0; r<nr; r++)
    {
        for (c=0; c<nc; c++)
                printf("%d\t", mat[r][c]);
        printf ("\n");
    }
}

void stampaPerColonne(){
    int mat[nrMax][ncMax], nr, nc;
    int r, c;
    FILE *f;
    f=fopen("numeri.txt", "r");
    if (f==NULL)
        printf("Errore nell'apertra del file\n");
    else {
            fscanf(f,"%d" "%d" , &nr, &nc);
            for (c=0; c<nc; c++)
                for (r=0; r<nr; r++)
                    fscanf(f,"%d", &mat[r][c]);
    
    }
    fclose(f);
    printf("matrice di %d righe e %d colonne per righe\n" );
    printf(nr,nc);
    for (c=0; c<nc; c++)
    {
        for (r=0; r<nr; r++)
                printf("%d\t", mat[r][c]);
        printf ("\n");
    }
}

int main(int argc, char *argv[])
{
        stampaPerRighe();
        stampaPerColonne();
        system("PAUSE");
        return 0;
}