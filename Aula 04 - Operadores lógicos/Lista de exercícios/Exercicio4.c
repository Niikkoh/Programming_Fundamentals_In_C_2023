#include <stdio.h>

int main()
{

    /*Entrada de dados*/

    int reais,cedulaAux;

    scanf("%d",&reais);

    printf("R$ %d = ", reais); //printa os reais


    /*Separa as cédulas de 100 do valor e atualiza seu valor*/
    cedulaAux = reais / 100;
    reais = reais % 100;

    if(cedulaAux)
        printf("%d cedula de 100. ",cedulaAux);

    /*Cédulas de 50*/

    cedulaAux = reais / 50;
    reais = reais % 50;

    if(cedulaAux)
        printf("%d cedula de 50. ",cedulaAux);

    /*Cédulas de 20*/

    cedulaAux = reais / 20;
    reais = reais % 20;

    if(cedulaAux)
        printf("%d cedula de 20. ",cedulaAux);

    /*Cédulas de 10*/

    cedulaAux = reais / 10;
    reais = reais % 10;

    if(cedulaAux)
        printf("%d cedula de 10. ",cedulaAux);

    /*Cédulas de 5*/

    cedulaAux = reais / 5;
    reais = reais % 5;

    if(cedulaAux)
        printf("%d cedula de 5. ",cedulaAux);

    /*Cédulas de 2 e 1*/

    cedulaAux = reais / 2;
    reais = reais % 2;

    if(cedulaAux)
        printf("%d cedula de 2. ",cedulaAux);

    if(reais)
        printf("%d cedula de 1.", reais);

    return 0;
}
