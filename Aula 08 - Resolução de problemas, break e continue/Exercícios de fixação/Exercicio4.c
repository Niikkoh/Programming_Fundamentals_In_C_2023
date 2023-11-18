#include <stdio.h>

int main()
{
    unsigned int metrosCorrida, metrosPista, pontoTermino;

    //Informa os metros que o Leonardo quer correr e os metros da pista
    scanf("%d %d", &metrosCorrida, &metrosPista);

    //Calcula o ponto do termino
    pontoTermino = metrosCorrida % metrosPista;

    //Imprime o resultado
    printf("%d", pontoTermino);

    return 0;
}
