#include <stdio.h>

#define LIMITE_CONT 10

int main()
{

    int i, valorN;

    scanf("%d", &valorN);

    for( i = 1; i <= LIMITE_CONT; i++)
        printf("%d ", valorN + i);

    return 0;
}
