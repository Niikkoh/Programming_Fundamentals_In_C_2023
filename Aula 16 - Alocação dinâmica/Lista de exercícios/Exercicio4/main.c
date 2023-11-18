#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pack_string.h"

/*=============================*/

#define TAMANHO_TEXTO 1024

/*=============================*/

int main()
{
    char string1 [TAMANHO_TEXTO],
         string2 [TAMANHO_TEXTO],
         string3 [TAMANHO_TEXTO],
         auxiliar [TAMANHO_TEXTO];

    fgets (string1, TAMANHO_TEXTO, stdin);
    fgets (string2, TAMANHO_TEXTO, stdin);
    fgets (string3, TAMANHO_TEXTO, stdin);

    system("cls");

    printf("%s%s%s", string1, string2, string3);

    fgets (auxiliar, TAMANHO_TEXTO, stdin);
    while(strlen(auxiliar) != 1)
    {
        copiaString(string2, string1);
        copiaString(string3, string2);
        copiaString(auxiliar, string3);

        system("cls");
        printf("%s%s%s\n", string1, string2, string3);

        fgets (auxiliar, TAMANHO_TEXTO, stdin);
    }
    return 0;
}
