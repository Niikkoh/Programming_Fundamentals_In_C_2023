#include <stdio.h>

#define N 10

int main()
{
    int i,j;

    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= N; j++)
            printf("%d X %d = %d\n", j, i, j*i);
        printf("\n");
    }

    return 0;
}
