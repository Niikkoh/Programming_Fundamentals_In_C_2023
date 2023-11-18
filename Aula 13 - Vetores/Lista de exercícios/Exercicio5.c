#include <stdio.h>

/*========================*/

#define N 50

/*========================*/

int main()
{
    int campoMinado[N], i, tamN,
        nAnt = 0, nAtual = 0, nProx = 0;

    scanf("%d", &tamN);

    scanf("%d", &nProx);
    for(i = 1; i < tamN; i++)
    {
        nAnt = nAtual;
        nAtual = nProx;
        scanf("%d", &nProx);

        campoMinado[i-1] = nAnt + nAtual + nProx;
    }

    nAnt = nAtual;
    nAtual = nProx;
    nProx = 0;
    campoMinado[i-1] = nAnt + nAtual + nProx;

    for(i = 0; i < tamN; i++)
        printf("%d ", campoMinado[i]);

    return 0;
}
