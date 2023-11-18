#include <stdlib.h>
#include <stdio.h>

#include "text.h"

/*==============*/

char* concatenaStrings (char* s1, char* s2)
{
    int i, j, contador = 0;
    char *stringResultado;

    for(i = 0; s1[i] != '\0'; i++);
    contador += i;

    for(j = 0; s2[j] != '\0'; j++);
    contador += j;

    contador++;
    stringResultado = (char*) malloc(sizeof(char) * contador);

    for(j = 0; j < contador; j++)
    {
        if(j < i)
            stringResultado[j] = s1[j];
        else
            stringResultado[j] = s2[j - i];
    }

    return stringResultado;
}
