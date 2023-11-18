#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*=======================*/

#define TAM_VETOR 100
#define MENOR_N -40
#define MAIOR_N 40

/*=======================*/


int main()
{
    srand(time(NULL));

    float vetor[TAM_VETOR],
          aux, media = 0;

    unsigned int i, contador = 0;

    for(i = 0; i < TAM_VETOR; i++)
    {
        aux = ((float)rand() / RAND_MAX) * (MAIOR_N - MENOR_N) + MENOR_N;

        if(aux >= 0)
        {
            vetor[contador] = aux;
            media += aux;
            contador++;
        }
    }

    media = media / contador;
    printf("A media eh: %.2f\n\n", media);

    for(i = 0; i < contador; i++)
    {
        printf("\n%.2f - ", vetor[i]);

        if(vetor[i] < media)
            printf("Abaixo da media");
        else if(vetor[i] == media)
            printf("Igual a media");
        else
            printf("Acima da media");
    }

    return 0;
}
