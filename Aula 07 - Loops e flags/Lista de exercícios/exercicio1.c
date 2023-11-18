#include <stdio.h>

int main()
{

    int i, numeroN, fatorial = 1;

    scanf("%d",&numeroN);

    /*Calcula o fatorial de um numero dado*/
    for(i=numeroN; i > 0; i--)
        fatorial *= i;

    printf("%d", fatorial);

    return 0;
}
