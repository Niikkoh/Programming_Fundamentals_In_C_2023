#include <stdio.h>

int main ()
{

    /*Entrada de dados*/

    int valor1, valor2, valor3;

    scanf("%d %d %d", &valor1, &valor2, &valor3);

    /*Compara os numeros e ordena de forma crescente*/

    /*Solu��o 1**/
    if(valor1 < valor2 && valor1 < valor3)
    {
        if(valor2 < valor3)
            printf("%d %d %d", valor1, valor2, valor3);
        else
            printf("%d %d %d", valor1, valor3, valor2);
    }
    else if(valor2 < valor3)
    {
        if(valor3 < valor1)
            printf("%d %d %d", valor2, valor3, valor1);
        else
            printf("%d %d %d", valor2, valor1, valor3);
    }
    else
    {
        if(valor1 < valor2)
            printf("%d %d %d", valor3, valor1, valor2);
        else
            printf("%d %d %d", valor3, valor2, valor1);
    }

    /*SOLU��O 2
    if(valor1 < valor2)
    {
        if(valor1 < valor3)
        {
            if(valor2 < valor3)
                printf("%d %d %d", valor1, valor2, valor3);
            else
                printf("%d %d %d", valor1, valor3, valor2);
        }
        else
            printf("%d %d %d", valor3,valor1,valor2);
    }
    else
    {
        if(valor2 < valor3)
        {
            if(valor1 < valor3)
                printf("%d %d %d", valor2, valor1, valor3);
            else
                printf("%d %d %d", valor2, valor3, valor1);
        }
        else
            printf("%d %d %d", valor3, valor2, valor1);
    }
    */

    return 0;

}
