#include "cpf_lib.h"

/*======================*/

#define DIGITOS_INDEPENDENTES 9

#define MOD_11 11
#define MOD_10 10

#define DIGITO_CONTROLE_1 10
#define DIGITO_CONTROLE_2 11

/*======================*/


int verificaCPF(int *cpf)
{
    int digitoDez, digitoOnze;

    calculaDigitosDeControle(cpf, &digitoDez, &digitoOnze);

    if(cpf[DIGITO_CONTROLE_1 - 1] == digitoDez && cpf[DIGITO_CONTROLE_2 - 1] == digitoOnze)
        return 1;
    return 0;
}

void calculaDigitosDeControle(int *cpf, int *digitoDez, int *digitoOnze)
{
    int i, somatoria = 0;

    for(i = 0; i < DIGITOS_INDEPENDENTES; i++)
        somatoria += cpf[i] * (i+1);
    *digitoDez = (somatoria % MOD_11) % MOD_10;

    somatoria = 0;
    for(i = 1; i < DIGITOS_INDEPENDENTES+1; i++)
        somatoria += cpf[i] * i;
    *digitoOnze = (somatoria % MOD_11) % MOD_10;
}
