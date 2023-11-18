#include <stdio.h>
#include <string.h>

/*==================*/

#define QUANTIDADE_STRINGS 5
#define TAMANHO_STRING 128

/*==================*/

int main()
{
    char textos[QUANTIDADE_STRINGS][TAMANHO_STRING];

    int i;

    for(i=0; i < QUANTIDADE_STRINGS; i++)
        fgets(textos[i],TAMANHO_STRING,stdin);

    printf("\n");

    for(i=QUANTIDADE_STRINGS - 1; i >= 0; i--)
        printf("%s", textos[i]);

    return 0;
}
