#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);
    printf("\n\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i; j++)
            printf("%c ", 'A' + n - i - 1);
        printf("\n");
    }

    return 0;
}

