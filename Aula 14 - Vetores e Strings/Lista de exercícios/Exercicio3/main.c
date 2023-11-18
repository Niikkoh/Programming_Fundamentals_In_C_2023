#include <stdio.h>

#include "cebolinha.h"

/*=============================*/

#define N 100
#define TEXTO "Arraia arroba areia"

int main()
{
    char string[N] = TEXTO,
         buffer[N];

    stling(string, buffer);

    printf("%s\n\n%s", string, buffer);

    return 0;
}
