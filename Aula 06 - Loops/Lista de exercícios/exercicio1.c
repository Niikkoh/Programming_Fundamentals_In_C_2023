#include <stdio.h>

#define N 10 //Número de entradas
#define LIMITE 20 //Limite de valor máximo permitido para inclusão do valor na média

int main()
{

    /*Entrada de variáveis*/

    int i, numInt,
        soma = 0,
        contador = 0;

    /*Loop com os valores de entrada
      O loop é feito em while, como pedido no enunciado*/
    i = 0;
    while(i < N)
    {
        scanf("%d",&numInt);

     /*Soma os valores de entrada para um futuro cálculo da média,
       na condição da entrada ser menor que o LIMITE pré estabelecido*/
        if(numInt < LIMITE)
        {
            soma += numInt;
            contador++;
        }

        i++;
    }

    /*Calcula a média dos numeros incluidos na soma
      considera que a soma pode ser zero*/

    if(contador)
        printf("\n%.3f", (float) soma/contador);
    else
        printf("%d", soma);

    return 0;
}
