#include <stdio.h>

#include "pompeia.h"

/*======================*/

int main()
{

    char manuscrito[N_LINHAS][N_COLUNAS] ={{'S', 'A', 'T', 'O', 'R', '\n'},
                                           {'A', 'R', 'E', 'P', 'O', '\n'},
                                           {'T', 'E', 'N', 'E', 'T', '\n'},
                                           {'O', 'P', 'E', 'R', 'A', '\n'},
                                           {'R', 'O', 'T', 'A', 'S', '\n'},};


    if(eh_livre(manuscrito))
        printf("O escravo esta livre");
    else
        printf("O escravo nao esta livre");

    return 0;
}
