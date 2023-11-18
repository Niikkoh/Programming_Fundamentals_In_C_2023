#include <stdio.h>

int ehBissexto (int ano);

int main()
{

    int ano;

    scanf("%d", &ano);

    printf("\n%d", ehBissexto(ano));

    return 0;
}

int ehBissexto (int ano)
{
    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
        return 1;
    return 0;
}
