#include <stdio.h>
#include <stdlib.h>

/*==========================*/

#define TAM_VETOR 10

/*==========================*/

int main()
{
    float *vetor;
    int i;

    vetor = (float*) malloc(sizeof(float) * TAM_VETOR);

    for(i = 0; i < TAM_VETOR; i++)
        scanf("%f", &vetor[i]);

    printf("\n");

    for(i = 0; i < TAM_VETOR; i++)
        printf("%.2f\n", vetor[i]);

    free(vetor);

}
