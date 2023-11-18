#include <stdio.h>

#include "order_numbers.h"

/*=======================*/

#define N 5

/*=======================*/

int main()
{
    int v[N] = {0, 1, 2, 3, 4};

    printf("%d", ehCrescente(v, N));

    return 0;
}
