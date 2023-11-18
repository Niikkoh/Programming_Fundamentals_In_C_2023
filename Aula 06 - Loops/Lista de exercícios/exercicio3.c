#include <stdio.h>

#define TOTAL_NOTAS 6 //Numero do total das notas dadas pelos ju�zes

int main()
{

    /*Declara��o das vari�veis*/

    float nota, notaMaior = 0.0, notaMenor = 10.0,
        media = 0.0;

    int i;

    /*Atribui as notas dadas pelos ju�zes a uma soma, usada posteriormente para m�dia*/

    for(i=0; i < TOTAL_NOTAS; i++)
    {
        scanf("%f",&nota);
        media += nota;

        if(nota > notaMaior) //Salva a maior nota atribuida entre os juizes
            notaMaior = nota;

        if(nota < notaMenor) //Tamb�m a menor nota
            notaMenor = nota;

    }

    /*Calcula a m�dia das notas dadas pelos ju�zes, retirando a maior e menor nota dada*/

    media = (media - notaMaior - notaMenor) / (TOTAL_NOTAS - 2);

    printf("%.2f", media);

    return 0;
}
