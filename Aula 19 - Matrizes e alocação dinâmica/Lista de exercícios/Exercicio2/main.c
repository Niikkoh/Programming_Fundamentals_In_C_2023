#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "dados_lib.h"

/*==========================*/

int main()
{
    srand(time(NULL));

    int ***caixaDados, **saida, ehValido;

    caixaDados = geraCaixaDados(LARGURA, ALTURA, ROLAGENS);
    saida = geraMatriz (LARGURA, ALTURA);

    ehValido = analisa (caixaDados, LARGURA, ALTURA, saida);

    printaDadosAprovados(saida, LARGURA, ALTURA);

    printf("\nEh valido: %d", ehValido);

    freeCaixaDados(caixaDados, LARGURA, ALTURA);
    freeMatriz(saida, ALTURA);

    return 0;
}
