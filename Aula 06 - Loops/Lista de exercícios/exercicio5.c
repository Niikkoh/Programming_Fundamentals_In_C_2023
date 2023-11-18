#include <stdio.h>

#define CASA_SEXAGEZIMAL 60 //Para cálculos que envolvam numeros na base sexagezimal
#define LIMITE_ENTRADAS 3 //O limite de entradas que serão dados pelo usuario

int main()
{

    /*Declaração e iniciação de variaveis*/

    int horas, minutos, segundos,
        horasTotais = 0, minutosTotais = 0, segundosTotais = 0,
        i;

    /*Loop para estabelecer as entradas de tempo dada pelo usuário*/

    for(i=0; i < LIMITE_ENTRADAS; i++)
    {

        /*Garante que o usuario ira inserir uma entrada valida*/

        scanf("%d:%d:%d",&horas, &minutos, &segundos);
        while( minutos >= CASA_SEXAGEZIMAL || segundos >= CASA_SEXAGEZIMAL || minutos < 0 || segundos < 0 || horas < 0)
        {
            printf("Entrada invalida!!\n");
            scanf("%d:%d:%d",&horas, &minutos, &segundos);
        }

        /*Soma os segundos estabelecidos e garante que se mantenha na base sexagezimal*/
        segundosTotais += segundos;
        if(segundosTotais >= CASA_SEXAGEZIMAL)
        {
            segundosTotais -= CASA_SEXAGEZIMAL;
            minutosTotais++;
        }

        /*Repete o mesmo processo com os minutos*/
        minutosTotais += minutos;
        if(minutosTotais >= CASA_SEXAGEZIMAL)
        {
            minutosTotais -= CASA_SEXAGEZIMAL;
            horasTotais++;
        }

        horasTotais += horas; //por fim soma as horas
    }

    /*Retorna o valor da soma de todas as horas dadas pela entrada*/
    printf("\n%d:%.2d:%.2d", horasTotais, minutosTotais, segundosTotais);

    return 0;
}
