#include <stdio.h>

#include "super_string.h"

/*====================*/

#define DIFERENCA_LETRA_MINUSCULA 32

void contador_de_letras(char *texto)
{
    int i, j, contador;

    for(i = 'A'; i <= 'Z'; i++)
    {
        contador = 0;

        for(j = 0; texto[j] != '\0'; j++)
            if(texto[j] == i || texto[j] == i + DIFERENCA_LETRA_MINUSCULA)
                contador++;

        printf("Tem %d ocorrencias da letra %c\n", contador, i);
    }
}
