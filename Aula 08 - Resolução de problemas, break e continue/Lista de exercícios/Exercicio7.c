#include <stdio.h>

int main()
{
    unsigned int valoresN, i, numSorteio, numAnterior,
                 contador = 1, contadorMax = 1;

    scanf("%d", &valoresN); //Informa a quantidade de numeros do sorteio

    scanf("%d", &numAnterior); //Entra so o primeiro numero do sorteio

    //Enquanto estiver verificando cada numero sorteado
    for(i = 1; i < valoresN; i++)
    {
        scanf("%d", &numSorteio);//Entra o numero do sorteio correspondente

        //Se o numero sorteado for igual ao anterior
        if(numAnterior == numSorteio)
        {
            contador++;//incrementa o contador
            if(contador > contadorMax)//Caso for a maior sequencia registrada
                contadorMax++;
        }
        else
            contador = 1;

        numAnterior = numSorteio; //Atualiza o numero anterior
    }

    printf("\n%d", contadorMax);//Retorna a maior sequencia de numeros iguais

    return 0;
}
