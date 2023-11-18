#include <stdio.h>

#include "palidrox.h"

/*=====================*/

#define S_LENGH 50
#define TEXT "ovo"

/*=====================*/

int main()
{
    char s[S_LENGH] = TEXT;

    printf("%d", ehPalindromo(s));

    return 0;
}
