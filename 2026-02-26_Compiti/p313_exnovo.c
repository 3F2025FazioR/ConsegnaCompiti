#include <stdio.h>
#include <stdlib.h>
#define N 4
void trasporta(int m[N][N], int ml[N][N]);
int sommaDiagonale(int m[N][N]);
void stampa(int m[N][N]);
int main(int argc, char *argv)
{
    int mat[N][N]= {{1,3,4,5},{6,57,8,9},{10,11,12,13},{3,5,6,9}};
    int mat[N][N];
    int tot;
    int scelta;
    do{
        printf("\n\n1.somma diagonale principale\n");
        printf("2.matrice trasposta\n");
        printf("0.esci\n");
        printf("fai una scelta");
        scanf("%d" , &scelta);
        switch(scelta) {
            case 1:
                    
        }
    }
}