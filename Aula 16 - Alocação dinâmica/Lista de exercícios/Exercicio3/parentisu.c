#include "parentisu.h"

/*=====================*/

#define DEFAULT_VALOR -2

/*=====================*/

void balanceamentoDeParenteses (char* str, int* parenteses)
{
    int i, j, contadorParenteses, contador = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        contador++;
        parenteses[i] = DEFAULT_VALOR;
    }

    for(i = 0; i < contador; i++)
    {
        if(str[i] == ')')
        {
            if(parenteses[i] == DEFAULT_VALOR)
                parenteses[i] = -1;
        }
        else if(str[i] == '(')
        {
            contadorParenteses = 1;
            for(j = i+1; j < contador; j++)
            {
                if(str[j] == '(')
                    contadorParenteses++;
                else if(str[j] == ')')
                    contadorParenteses--;

                if(!contadorParenteses)
                {
                    parenteses[j] = i;
                    parenteses[i] = j;
                    break;
                }
            }
            if(contadorParenteses)
                parenteses[i] = -1;
        }
        else
            parenteses[i] = 0;
    }
}
