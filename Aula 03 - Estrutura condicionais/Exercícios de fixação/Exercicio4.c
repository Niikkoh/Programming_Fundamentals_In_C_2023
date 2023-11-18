#include <stdio.h>

int main ()
{

    int anoNascimento, anoAtual,
        idade;

    printf("\tVerificacao de eleitor\n\n");

    printf("Informe seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("\nInforme o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    if(idade < 0)
        printf("\nERRO: os anos informados estao incorretos");
    else
    {
        printf("\nA idade do usuario eh %d\n",idade);

        if(idade < 16)
            printf("Não eleitor");
        else if(idade <= 18 || idade > 65)
            printf("Eleitor facultativo");
        else
            printf("Eleitor obrigatorio");
    }

    return 0;
}
