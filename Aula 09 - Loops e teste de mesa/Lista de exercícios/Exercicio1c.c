#include <stdio.h>

#define CHANCES_DADO 6

int main()
{
    int i, j, k;

    for(i = 1; i <= CHANCES_DADO; i++)
        for(j = i; j <= CHANCES_DADO; j++)
            for(k = j; k <= CHANCES_DADO; k++)
                printf("%d, %d, %d\n", i, j, k);

    return 0;
}
