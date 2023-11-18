#include <stdio.h>

int main()
{

    /*Entrada de dados*/
    int numeroConta, numeroInv, aux, digito;

    scanf("%d", &numeroConta);


    /*Calcula o digito final do cartão baseado em seus 3 numeros*/
    numeroInv = (numeroConta/100) + ((numeroConta%100)-numeroConta%10) + numeroConta%10*100;
    aux = ((numeroConta + numeroInv)%1000);
    digito = ((aux/100) + 2*(aux%100/10) + 3*(aux%10))%10;


    /*Saida de dados*/
    printf("%d",digito);

    return 0;
}
