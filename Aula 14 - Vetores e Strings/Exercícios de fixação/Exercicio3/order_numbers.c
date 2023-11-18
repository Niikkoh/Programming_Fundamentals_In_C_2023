#include "order_numbers.h"

/*=======================*/

int ehCrescente (int *v, unsigned int n)
{
    int i;

    for (i=0; i < n-1; i++)
        if(v[i] > v[i+1])
            return 0;
    return 1;
}
