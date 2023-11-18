#include <stdio.h>

#define N 10

int main()
{
    int i;

    /*Loop usando while*/

    i=0;
    while(i < N)
    {
        printf("%d ",i);
        i++;
    }

    printf("\n");

    /*Loop usando for*/

    for(i = 0; i < N; i++)
        printf("%d ",i);

    return 0;
}
