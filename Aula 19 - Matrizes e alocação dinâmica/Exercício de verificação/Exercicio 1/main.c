#include "pascal.h"

/*===================*/

#define GRAU 8

/*===================*/

int main()
{
    int **pascal;

    pascal = geraTrianguloDePascal(GRAU);

    printaMatrizInt(pascal, GRAU, GRAU);
    freeMatrizInt(pascal, GRAU);

    return 0;
}
