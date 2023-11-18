#include <stdio.h>

#include "add_math.h"

int ehPrimo (int numero)
{
    int i;

    if (numero == 2)
        return (1);

    if (!(numero % 2))
        return (0);

    for (i = 3; i < numero; i += 2)
        if (!(numero % i))
            return (0);

    return (1);

}
