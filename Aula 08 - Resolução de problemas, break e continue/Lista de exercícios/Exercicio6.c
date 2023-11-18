#include <stdio.h>

int main()
{
    unsigned int numeroInteiro, numeroInvertido = 0,
                 varAuxiliar;

    scanf("%d", &numeroInteiro);//Informa o numero inteiro
    varAuxiliar = numeroInteiro; //Atribui o numero inteiro a variavel auxiliar

    //Enquanto a variavel auxiliar não ter todas suas unidades retiradas
    while(varAuxiliar)
    {
        /*Multiplica o numero invertido por 10, atribui o
         ultimo algarismo da varAuxiliar ao numero invertido*/
        numeroInvertido = (numeroInvertido * 10) + (varAuxiliar % 10);
        varAuxiliar /= 10;//Divide a varAux por 10
    }

    //Se o numero de entrada for o mesmo do invertido
    if(numeroInteiro == numeroInvertido)
        printf("\nSao palindromos");
    else
        printf("\nNao sao palindromos");

    return 0;
}
