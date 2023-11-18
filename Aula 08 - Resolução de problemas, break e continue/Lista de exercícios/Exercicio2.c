#include <stdio.h>

#define META 1000000

int main()
{

    unsigned int viewsDiarias, totalViews = 0,
                 valoresN, i;
    int diaDaMeta = -1;

    //Recebe o numero de dias necessarios para atingir a meta
    scanf("%d", &valoresN);

    //Enquanto verifica as views de cada dia
    for(i = 1; i <= valoresN; i++)
    {
        scanf("%d", &viewsDiarias);//Informa as views do dia
        totalViews += viewsDiarias;//Incrementa as views diarias ao total

        //Se caso as views totais baterem a meta
        if(totalViews >= META && diaDaMeta == -1)
            diaDaMeta = i; //Guarda o dia que a meta foi atingiada
    }

    //Retorna o dia que a meta foi atingida
    printf("\n%d", diaDaMeta);

    return 0;
}
