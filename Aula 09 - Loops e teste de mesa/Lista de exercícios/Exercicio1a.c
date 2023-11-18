#include <stdio.h>

#define CHANCES_DADO 6

int main()
{
    int i, j;

    for(i = 1; i <= CHANCES_DADO; i++)
        for(j = 1; j <= CHANCES_DADO; j++)
            printf("%d, %d\n", i, j);

    return 0;
}
