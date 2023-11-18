
#ifndef _RPG_LIB_
#define _RPG_LIB_

/*======================*/

#define MAX_BENFEITORIAS 10
#define MAX_EXERCITOS 20

#define MAX_TERRITORIOS 3

/*======================*/

typedef struct
{
    float lucro_mult;
    float lucro_soma;
} Benfeitoria;


typedef struct
{
    float custo;
} Exercito;


typedef struct
{
    float lucro_base;

    Benfeitoria* benfeitorias [MAX_BENFEITORIAS];
    int n_benfeitorias;

    Exercito* exercitos [MAX_EXERCITOS];
    int n_exercitos;

} Territorio;

typedef struct
{
 Territorio* territorios [MAX_TERRITORIOS];
 int n_territorios;
} Faccao;

/*======================*/

float lucroTotal (Faccao* f);

/*======================*/

#endif // _RPG_LIB_
