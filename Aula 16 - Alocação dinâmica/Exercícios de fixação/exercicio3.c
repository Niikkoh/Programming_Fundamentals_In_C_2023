#include <stdio.h>

/*================== */

#define TAM 10

/*================== */

void copiaVetor (int *vetor, int *vetor2)
{
    int i;

    for (i = 0; i < TAM; i++)
        vetor2[i] = vetor [i];
}

void imprimeVetor (int *vetor)
{
    int i;

    for (i = 0; i < TAM; i++)
        printf("%d ", vetor [i]);
    printf("\n");
}

int main ()
{
    int vet [TAM], vet2 [TAM];
    int i;

    for (i = 0; i < TAM; i++)
        scanf ("%d", &vet [i]);

    copiaVetor (vet, vet2);

    printf("Vetor:\n");
    imprimeVetor (vet);

    printf("Copia:\n");
    imprimeVetor (vet2);

    return (0);
}
