#include <string.h>

#include "palidrox.h"

/*=======================*/

int ehPalindromo (char* s)
{
    int i, n = strlen(s) - 1;

    for(i = 0; i < n; i++, n--)
    {
        if(s[i] != s[n])
            return 0;
    }
    return 1;
}
