#include <stdio.h>

#include "incrementa_decrementa.h"

/*=======================================*/

int main()
{

    int a,b;

    scanf("%d %d", &a, &b);

    incDec(&a, &b);

    printf("\n%d, %d", a, b);

    return 0;
}
