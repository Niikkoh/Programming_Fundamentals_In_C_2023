#include "rpg_lib.h"

/*======================*/

float lucroTotal (Faccao* f)
{
    int lucro = 0, lucroPorTerritorio,
        i, j;

    for(i=0; i < f->n_territorios; i++)
    {
        lucroPorTerritorio = 0;

        for(j=0; j < f->territorios[i]->n_benfeitorias; j++)

            lucroPorTerritorio += ((f->territorios[i]->benfeitorias[j]->lucro_mult) * (f->territorios[i]->lucro_base))
                                  + f->territorios[i]->benfeitorias[j]->lucro_soma;

        for(j=0; j < f->territorios[i]->n_exercitos; j++)
            lucroPorTerritorio -= f->territorios[i]->exercitos[j]->custo;

        lucro += lucroPorTerritorio;
    }

    return lucro;
}
