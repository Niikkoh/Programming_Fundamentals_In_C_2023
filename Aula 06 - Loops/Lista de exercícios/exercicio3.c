#include <stdio.h>

#define TOTAL_NOTAS 6 //Numero do total das notas dadas pelos juízes

int main()
{

    /*Declaração das variáveis*/

    float nota, notaMaior = 0.0, notaMenor = 10.0,
        media = 0.0;

    int i;

    /*Atribui as notas dadas pelos juízes a uma soma, usada posteriormente para média*/

    for(i=0; i < TOTAL_NOTAS; i++)
    {
        scanf("%f",&nota);
        media += nota;

        if(nota > notaMaior) //Salva a maior nota atribuida entre os juizes
            notaMaior = nota;

        if(nota < notaMenor) //Também a menor nota
            notaMenor = nota;

    }

    /*Calcula a média das notas dadas pelos juízes, retirando a maior e menor nota dada*/

    media = (media - notaMaior - notaMenor) / (TOTAL_NOTAS - 2);

    printf("%.2f", media);

    return 0;
}
