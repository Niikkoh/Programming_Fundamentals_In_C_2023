#include <stdio.h>

int main()
{

    /*Entrada de dados*/

    int anoNascimento, anoAtual, inss,
        idade;

    printf("\tCalcula aposentadoria:\n\n");

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Ano Atual: ");
    scanf("%d", &anoAtual);

    printf("Anos de contribuicao no INSS: ");
    scanf("%d", &inss);

    /*Calcula e mostra a idade ao usuario*/

    idade = anoAtual - anoNascimento;
    printf("\nA idade do usuario eh de %d\n", idade);


    /*Compara se o usuario pode se aposentar ou não*/

    if(idade >= 65 || inss >= 30 || (idade >= 60 && inss >= 25))
        printf("Pode se aposentar");
    else
        printf("Nao pode se aposentar");

    return 0;
}
