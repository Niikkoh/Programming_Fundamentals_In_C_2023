#include <stdio.h>

int main()
{
    int n, i, j, contador = 0;

    scanf("%d", &n);

    i = n-1;
    while(contador != n)
    {
        contador = 0;
        i++;
        for(j=1; j <= n; j++)
        {
            if(i%j == 0)
                contador++;
        }
    }

    printf("\n%d", i);

    return 0;
}
