#include <stdio.h>

int main()
{
    int i, valorN;

    scanf("%d", &valorN);

    i=1;

    /*Mostra a tabuada de valor N usando while*/
    while(i <= 10)
    {
        printf("%d ", valorN * i);
        i++;
    }

    printf("\n");

    /*Mostra a tabuada de valor N usando for*/
    for(i = 1; i <= 10; i++)
        printf("%d ", valorN * i);

    return 0;
}
