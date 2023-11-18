#include <stdio.h>
#include <string.h>

/*==========================*/

#define JANEIRO "Jan"
#define JANEIRO_DIAS 31
#define JANEIRO_MES 1

#define FEVEREIRO "Fev"
#define FEVEREIRO_DIAS 28
#define FEVEREIRO_MES 2

#define MARCO "Mar"
#define MARCO_DIAS 31
#define MARCO_MES 3

#define ABRIL "Abr"
#define ABRIL_DIAS 30
#define ABRIL_MES 4

#define MAIO "Mai"
#define MAIO_DIAS 31
#define MAIO_MES 5

#define JUNHO "Jun"
#define JUNHO_DIAS 30
#define JUNHO_MES 6

#define JULHO "Jul"
#define JULHO_DIAS 31
#define JULHO_MES 7

#define AGOSTO "Ago"
#define AGOSTO_DIAS 31
#define AGOSTO_MES 8

#define SETEMBRO "Set"
#define SETEMBRO_DIAS 30
#define SETEMBRO_MES 9

#define OUTUBRO "Out"
#define OUTUBRO_DIAS 31
#define OUTUBRO_MES 10

#define NOVEMBRO "Nov"
#define NOVEMBRO_DIAS 30
#define NOVEMBRO_MES 11

#define DEZEMBRO "Dez"
#define DEZEMBRO_DIAS 31
#define DEZEMBRO_MES 12

/*==========================*/

#define NOME_ABV 4
#define MESES_DO_ANO 12

/*==========================*/

typedef struct
{
    int numero;
    char nome[NOME_ABV];
    int dias;

}Calendario;

/*==========================*/

int main()
{
    Calendario ano[MESES_DO_ANO];
    int numero;

    //Janeiro
    strcpy(ano[JANEIRO_MES-1].nome, JANEIRO);
    ano[JANEIRO_MES-1].numero = JANEIRO_MES;
    ano[JANEIRO_MES-1].dias = JANEIRO_DIAS;

    //Fevereiro
    strcpy(ano[FEVEREIRO_MES-1].nome, FEVEREIRO);
    ano[FEVEREIRO_MES-1].numero = FEVEREIRO_MES;
    ano[FEVEREIRO_MES-1].dias = FEVEREIRO_DIAS;

    //Março
    strcpy(ano[MARCO_MES-1].nome, MARCO);
    ano[MARCO_MES-1].numero = MARCO_MES;
    ano[MARCO_MES-1].dias = MARCO_DIAS;

    //Abril
    strcpy(ano[ABRIL_MES-1].nome, ABRIL);
    ano[ABRIL_MES-1].numero = ABRIL_MES;
    ano[ABRIL_MES-1].dias = ABRIL_DIAS;

    //Maio
    strcpy(ano[MAIO_MES-1].nome, MAIO);
    ano[MAIO_MES-1].numero = MAIO_MES;
    ano[MAIO_MES-1].dias = MAIO_DIAS;

    //Junho
    strcpy(ano[JUNHO_MES-1].nome, JUNHO);
    ano[JUNHO_MES-1].numero = JUNHO_MES;
    ano[JUNHO_MES-1].dias = JUNHO_DIAS;

    //Julho
    strcpy(ano[JULHO_MES-1].nome, JULHO);
    ano[JULHO_MES-1].numero = JULHO_MES;
    ano[JULHO_MES-1].dias = JULHO_DIAS;

    //Agosto
    strcpy(ano[AGOSTO_MES-1].nome, AGOSTO);
    ano[AGOSTO_MES-1].numero = AGOSTO_MES;
    ano[AGOSTO_MES-1].dias = AGOSTO_DIAS;

    //Setembro
    strcpy(ano[SETEMBRO_MES-1].nome, SETEMBRO);
    ano[SETEMBRO_MES-1].numero = SETEMBRO_MES;
    ano[SETEMBRO_MES-1].dias = SETEMBRO_DIAS;

    //Outubro
    strcpy(ano[OUTUBRO_MES-1].nome, OUTUBRO);
    ano[OUTUBRO_MES-1].numero = OUTUBRO_MES;
    ano[OUTUBRO_MES-1].dias = OUTUBRO_DIAS;

    //Novembro
    strcpy(ano[NOVEMBRO_MES-1].nome, NOVEMBRO);
    ano[NOVEMBRO_MES-1].numero = NOVEMBRO_MES;
    ano[NOVEMBRO_MES-1].dias = NOVEMBRO_DIAS;

    //Dezembro
    strcpy(ano[DEZEMBRO_MES-1].nome, DEZEMBRO);
    ano[DEZEMBRO_MES-1].numero = DEZEMBRO_MES;
    ano[DEZEMBRO_MES-1].dias = DEZEMBRO_DIAS;

    scanf("%d", &numero);

    if(numero-1 >= 0 && numero-1 < MESES_DO_ANO)
        printf("\n%s - %d dias", ano[numero-1].nome, ano[numero-1].dias);
    else
        printf("\nErro");

    return 0;
}
