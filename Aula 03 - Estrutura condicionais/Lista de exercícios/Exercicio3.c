#include <stdio.h>

int main ()
{

    /*Entrada de dados e declara��o de var�aveis*/

    int valor1, valor2, valor3,
        maior;

    printf("Qual � o maior numero?\n");
    printf("Insira 3 inteiros: ");

    scanf("%d %d %d", &valor1, &valor2, &valor3);

    /*A var�avel "maior" ir� procurar entre os 3 inteiros qual � o maior
      valor, armazenando ele em seu conte�do*/

    maior = valor1;

    if(valor2 > maior)
        maior = valor2;

    if(valor3 > maior)
        maior = valor3;

    /*Sa�da de dado ao usu�rio*/

    printf("\nO maior numero eh %d",maior);

    return 0;
    }
