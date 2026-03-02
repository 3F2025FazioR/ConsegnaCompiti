#include <stdio.h>
#include <stdlib.h>
#define n 3
#define m 4
int totRiga(int M[n][m], int r);
int totColonna(int M[n][m], int c);
int totale(int M[n][m]);

int main(void)
{
    int mat[n][m]= {{2,3,4,5},{6,7,8,9},{10,11,12,13}};
    int i, j, tot, totr, totc;
    for (i=0; i<n; i++)
    {
            totr=totRiga(mat,i);
            printf("totale riga %d=%d\n", i+1, totr);
    }
    for (j=0; j<m; j++)
    {
            totc=totColonna(mat, j);
            printf ("totale colonna %d=%d\n", j+1, totc);
    }
    tot=totale(mat);
    printf("totale generale=%d\n", tot);
    system("PAUSE");
    return 0;
}

int totRiga(int M[n][m], int r)
{
        int j, tot;
        tot=0;
        for (j=0; j<m; j++)
                tot=tot+M[r][j];
        return tot;
}

int totColonna(int M[n][m], int c)
{
    int i, tot;
    tot=0;
    for (i=0; i<n; i++)
            tot=tot+M[i][c];
    return tot;
}
int totale(int M[n][m])
{
    int j, i, tot;
    tot=0;
    for (i=0; i<n; i++)
            for(j=0; j<m; j++)
                    tot=tot+M[i][j];
    return tot;
}