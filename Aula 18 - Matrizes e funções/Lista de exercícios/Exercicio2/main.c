#include "reflexo.h"

/*=====================*/

int main()
{
    char matriz[TAMANHO_LINHA][TAMANHO_COLUNA] ={{"ABCDE"},
                                                 {" BCDE"},
                                                 {"  CDE"},
                                                 {"   DE"},
                                                 {"    E"}};

    imprimeComReflexo(matriz, TAMANHO_LINHA, TAMANHO_COLUNA);

    return 0;
}
