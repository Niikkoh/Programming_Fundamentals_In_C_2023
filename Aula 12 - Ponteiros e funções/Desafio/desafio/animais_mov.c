
#include "animais_mov.h"

/*=============================================*/

//Posição máxima e minima na pista
#define POS_MINIMA 1
#define POS_MAXIMA 70

//Movimentações da tartaruga
#define CAMINHADA_RAPIDA_TART 3
#define ESCORREGAO_TART 6
#define CAMINHADA_LENTA_TART 1


//Movimentações da lebre
#define SALTO_GRANDE_LEBRE 9
#define ESCORREGAO_GRANDE_LEBRE 12
#define SALTO_PEQUENO_LEBRE 1
#define ESCORREGAO_PEQUENO_LEBRE 2

/*=============================================*/


void moveTartaruga(int valorSorteado, int *ptrTar)
{
    if(valorSorteado <= 5)
        (*ptrTar) += CAMINHADA_RAPIDA_TART;
    else if(valorSorteado <=  7)
        (*ptrTar) -= ESCORREGAO_TART;
    else
        (*ptrTar) += CAMINHADA_LENTA_TART;

    if(*ptrTar < POS_MINIMA)
        *ptrTar = POS_MINIMA;
    else if(*ptrTar > POS_MAXIMA)
        *ptrTar = POS_MAXIMA;
}

void moveLebre(int valorSorteado,int *ptrLeb)
{
    if(valorSorteado <= 2)
        (*ptrLeb) += SALTO_GRANDE_LEBRE;
    else if(valorSorteado <= 3)
        (*ptrLeb) -= ESCORREGAO_GRANDE_LEBRE;
    else if(valorSorteado <= 6)
        (*ptrLeb) += SALTO_PEQUENO_LEBRE;
    else if(valorSorteado <= 8)
        (*ptrLeb) -= ESCORREGAO_PEQUENO_LEBRE;

    if(*ptrLeb < POS_MINIMA)
        *ptrLeb = POS_MINIMA;
    else if(*ptrLeb > POS_MAXIMA)
        *ptrLeb = POS_MAXIMA;

}
