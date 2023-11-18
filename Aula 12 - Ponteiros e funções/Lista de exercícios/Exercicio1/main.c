#include <stdio.h>

#include "tempo_lib.h"

/*================================*/

#define TOTAL_SEGUNDOS 10000

/*================================*/

int main()
{

    int h, m, s;

    segundosParaHMS(TOTAL_SEGUNDOS, &h, &m, &s);

    printf("%.d:%.2d:%.2d", h, m, s);

    return 0;
}
