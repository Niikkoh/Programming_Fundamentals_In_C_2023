#include <stdio.h>

int main()
{

    int apostaTimeA, apostaTimeB, resultadoTimeA, resultadoTimeB,
        pontos = 0;

    //Entra o valor do placar da aposta e o resultado
    scanf("%dx%d", &apostaTimeA, &apostaTimeB);
    scanf("%dx%d", &resultadoTimeA, &resultadoTimeB);

    //Se no resultado, o time vencedor (ou uma empate) corresponder ao da aposta
    if((apostaTimeA > apostaTimeB && resultadoTimeA > resultadoTimeB) ||
       (apostaTimeA < apostaTimeB && resultadoTimeA < resultadoTimeB) ||
       (apostaTimeA == apostaTimeB && resultadoTimeA == resultadoTimeB))
        pontos += 10; //Adiciona 10 pontos

    //Se o numero de gols do primeiro time corresponde ao da aposta
    if(apostaTimeA == resultadoTimeA)
        pontos += 5; //Adiciona 5 pontos

    //A mesma verificação com o segundo time
    if(apostaTimeB == resultadoTimeB)
        pontos += 5;//Adiciona 5 pontos

    //Retorna o numero de pontos
    printf("\n%d", pontos);

    return 0;
}
