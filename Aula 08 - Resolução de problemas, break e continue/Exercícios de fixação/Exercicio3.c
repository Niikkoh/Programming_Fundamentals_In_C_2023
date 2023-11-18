#include <stdio.h>

int main()
{
    unsigned int i, participantes, numVencedor = 0;
    int numIngresso;

    //Entra o numero de participantes
    scanf("%d", &participantes);

    //Enquanto estiver verificando os dados de cada participante
    for(i = 1; i <= participantes; i++)
    {
        //É lido o código de ingresso do atual participante
        scanf("%d", &numIngresso);

        //Se o código do ingresso coincidir com o iterador
        if(numIngresso == i && !numVencedor)
            numVencedor = numIngresso;//Guarda o valor do vencedor
    }

    //Informa o código  de ingresso "sorteado"
    printf("\n%d", numVencedor);

    return 0;
}
