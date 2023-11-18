#include <stdio.h>

int main ()
{
    char copoA = 'A',
    copoB = 'B',
    jarro;

    jarro = copoA;
    copoA = copoB;
    copoB = jarro;

    printf("Conteudo do copo A: %c\nConteudo do copo B: %c",copoA,copoB);

    return 0;
}
