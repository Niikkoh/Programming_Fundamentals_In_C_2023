#include <stdio.h>

#define N 5


int main()
{
    int somaN = 0, eh_primo,
        i, j, contador = 0;

    i = 2;
    while(contador != N)
    {
        eh_primo = 1;
        for(j = 2; j < i && eh_primo; j++)
        {
            if(i%j == 0)
                eh_primo = 0;
        }

        if(eh_primo)
        {
            somaN += i;
            contador++;
            printf("%d ", i);
        }
        i++;
    }

    printf("\n%d", somaN);

    return 0;
}
