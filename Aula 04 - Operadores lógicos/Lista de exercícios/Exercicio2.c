#include <stdio.h>

int main()
{

    /*Entrada de dados e declaração de variaveis*/

    int diaNas,mesNas,anoNas,
        diaAtual,mesAtual,anoAtual,
        idade;

    scanf("%d/%d/%d", &diaNas,&mesNas,&anoNas);
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);

    /*Calcula a idade do usuario baseado na data de nascimento e atual*/

    idade = anoAtual - anoNas - 1;

    if(mesAtual > mesNas || (mesAtual == mesNas && diaAtual >= diaNas))
        idade = idade + 1;

    /*Saída do dado*/
    printf("%d", idade);

    return 0;
}
