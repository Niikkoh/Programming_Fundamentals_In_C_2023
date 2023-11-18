#include "inverte_string.h"

/*===============*/

void inverte_texto(unsigned char *texto)
{
        int i, j, contador = 0;
        unsigned char letra_aux;

        for(i = 0; texto[i] != '\0'; i++)
            contador++;

        for(i = 0; i < contador; i++)
        {
            letra_aux = texto[0];

            for(j = 0; j < contador - 1 - i; j++)
                texto[j] = texto[j+1];
            texto[j] = letra_aux;
        }
}
