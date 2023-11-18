#include <stdio.h>

/*=======================*/

#define TAM_VETOR 1024

/*=======================*/

int main()
{
    unsigned int vetor[TAM_VETOR],
                 tam_n;
    int i;

    scanf("%d", &tam_n);

    for(i = 0; i < tam_n; i++)
        vetor[i] = i;

    for(i = tam_n-1; i >= 0; i--)
        printf("%d\n", vetor[i]);

    return 0;
}

