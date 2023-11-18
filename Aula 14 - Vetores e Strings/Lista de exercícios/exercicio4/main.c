#include <stdio.h>

#include "risoslib.h"

/*=======================*/

#define N 100
#define TEXT_RIZADA "huaauhahhuahau"

/*=======================*/

int main()
{
    char rizada[N] = TEXT_RIZADA;

    printf("%u", seRizadaEngracada(rizada));

    return 0;
}
