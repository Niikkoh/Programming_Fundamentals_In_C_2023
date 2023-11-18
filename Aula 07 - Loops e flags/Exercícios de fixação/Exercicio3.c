#include <stdio.h>

int main()
{
    /*Declaração de variaveis*/

    int limiteMin, limiteMax, numeroInt,
        numeroMin, numeroMax,
        contador = 0;

    /*Estabele o intervalo das entradas que serão possíveis no programa*/
    scanf("%d", &limiteMin);
    scanf("%d", &limiteMax);
    printf("---\n");

    /*Para garantir que qualquer valor do intervalo será maior ou menor que o que foi declarado aqui*/
    numeroMax = limiteMin - 1;
    numeroMin = limiteMax + 1;

    /*Os inteiros que estão entre o intervalo pré-estabelecido serão lidos
      esse bloco também guarda o maior e o menor inteiro digitado pelo usuário*/

    scanf("%d", &numeroInt);
    while(limiteMin <= numeroInt && numeroInt <= limiteMax)
    {
        /*Guarda o maior e o menor numero de entrada*/
        if(numeroInt < numeroMin)
            numeroMin = numeroInt;
        if(numeroInt > numeroMax)
            numeroMax = numeroInt;

        contador++;

        scanf("%d", &numeroInt);
    }

    if(contador)
        printf("\nTotal de entradas: %d \nNumero minimo: %d \nNumero maximo: %d", contador, numeroMin, numeroMax);
    else
        printf("\nERRO, nenhum valor de entrada valido");

    return 0;
}
