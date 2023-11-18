#include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);

    printf("\n\n");
    for(i = 0; i<n; i++)
    {
        for(j = n-i; j>0; j--)
            printf("A");
        printf("\n");
    }

    return 0;
}
