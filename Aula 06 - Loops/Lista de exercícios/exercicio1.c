#include <stdio.h>

#define N 10 //N�mero de entradas
#define LIMITE 20 //Limite de valor m�ximo permitido para inclus�o do valor na m�dia

int main()
{

    /*Entrada de vari�veis*/

    int i, numInt,
        soma = 0,
        contador = 0;

    /*Loop com os valores de entrada
      O loop � feito em while, como pedido no enunciado*/
    i = 0;
    while(i < N)
    {
        scanf("%d",&numInt);

     /*Soma os valores de entrada para um futuro c�lculo da m�dia,
       na condi��o da entrada ser menor que o LIMITE pr� estabelecido*/
        if(numInt < LIMITE)
        {
            soma += numInt;
            contador++;
        }

        i++;
    }

    /*Calcula a m�dia dos numeros incluidos na soma
      considera que a soma pode ser zero*/

    if(contador)
        printf("\n%.3f", (float) soma/contador);
    else
        printf("%d", soma);

    return 0;
}
