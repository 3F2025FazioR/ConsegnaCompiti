#include <stdio.h>
#include <stdlib.h>
#define CK 1.20

void importo()
{
    char nome[15];
    float kmInizio, kmFine, kmPercorsi, importo;

    printf("inserire il nome");
    scanf("%s" , nome);
    printf("inserire i km iniziali");
    scanf("%f" , &kmInizio);
    printf("inserire i km finali");
    scanf("%f" , &kmFine);
    kmPercorsi = kmFine - kmInizio;
    importo = kmPercorsi * CK;
    printf("Gentile Sig. %s deve pagare %f euro\n , nome , importo");
}

int main(int argc, char *argv[]) {

    importo();
    system("pause");
    return 0;
}