#include <stdio.h>

int main()
{
    int n, i, j, incrementa,
        nEspacos, nCaracteres;

    char caractere;

    scanf("%c", &caractere);
    scanf("%d", &n);
    printf("\n\n");

    nEspacos = n;
    nCaracteres = 1;
    incrementa = 1;
    for(i = 0; i < 2*n + 1; i++)
    {
        for(j = 0; j < nEspacos; j++)
            printf(" ");
        for(j = 0; j < nCaracteres; j++)
            printf ("%c", caractere);
        printf("\n");

        if(i == n)
            incrementa = -1;

        nEspacos -= incrementa;
        nCaracteres += incrementa*2;

    }
}
