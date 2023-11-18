#include <stdio.h>

int main ()
{

    /*Entrada de dados e declaração de varíaveis*/

    int valor1, valor2, valor3,
        maior;

    printf("Qual é o maior numero?\n");
    printf("Insira 3 inteiros: ");

    scanf("%d %d %d", &valor1, &valor2, &valor3);

    /*A varíavel "maior" irá procurar entre os 3 inteiros qual é o maior
      valor, armazenando ele em seu conteúdo*/

    maior = valor1;

    if(valor2 > maior)
        maior = valor2;

    if(valor3 > maior)
        maior = valor3;

    /*Saída de dado ao usuário*/

    printf("\nO maior numero eh %d",maior);

    return 0;
    }
