#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "pack_string.h"

/*====================*/

void copiaString (char* stringOriginal, char* stringCopia)
{
    int i;

    for(i = 0; stringOriginal[i] != '\0'; i++)
        stringCopia[i] = stringOriginal[i];
    stringCopia[i] = '\0';
}
