#include <stdio.h>

int main()
{

    /*Variaveis de entrada*/
    int quantidadeMax, inteiroN, salvaN, i,
        eh_crescente = 1, eh_decrescente = 1;

    scanf("%d", &quantidadeMax); //Estabelece a quantidade máxima de numeros digitados

    scanf("%d", &salvaN); //A entrada surge antes

    /*Loop de entradas*/
    for(i=1; i<quantidadeMax; i++)
    {
        scanf("%d", &inteiroN);

        /*Verifica se o numero anterior é crescente ou decrescente em comparação
          ao novo que foi digitado*/
        if(inteiroN > salvaN)
            eh_decrescente = 0;
        if(inteiroN < salvaN)
            eh_crescente = 0;

        salvaN = inteiroN;
    }

    /*Possiveis saidas dos dados*/
    if(eh_crescente)
        printf("\nA sequencia eh crescente");
     if(eh_decrescente)
        printf("\nA sequencia eh decrescente");
    else
        printf("\nNenhum dos casos");

    return 0;
}
