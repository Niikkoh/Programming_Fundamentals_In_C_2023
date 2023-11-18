#include <stdio.h>
#include <stdlib.h>

#include "primo_lib.h"

/*===================*/

int main ()
{

    int valorMax, num,
        *crivo;

    printf ( "Deseja verificar ate qual valor maximo? " ) ;
    scanf ( "%d" , &valorMax ) ;

    crivo = crivoDeEratostenes ( valorMax );

    printf ("\n\nPesquisa por primos entre 1 e %d ...\n " , valorMax);
    printf (" Digite -1 para sair .\n ");

    scanf ( "%d" , &num) ;

    while ( num != -1)
    {
        if( crivo [ num ])
            printf ( " Eh primo !\n " ) ;
        else
            printf ( " Nao eh primo !\n " ) ;

        scanf ( "%d" , &num ) ;
    }

    free ( crivo ) ;
    return 0;
}
