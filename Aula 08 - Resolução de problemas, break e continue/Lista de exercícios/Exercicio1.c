#include <stdio.h>

int main()
{
    unsigned int numeroA, numElementos = 1;

    //Entra o valor de A
    scanf("%d", &numeroA);

    printf("\na = %d", numeroA); //Mostra o próprio numero na tela

    //Enquanto o valor de A ser diferente de 1
    while(numeroA != 1)
    {
        //Se for par
        if(numeroA % 2 == 0)
            numeroA /= 2;
        else //Impar
            numeroA = numeroA * 3 + 1;

        printf(" %d", numeroA); //Mostra o numero A da sequencia
        numElementos++; //Incrementa o contador
    }

    //Mostra a quantidade de elementos gerados
    printf("\nElementos: %d", numElementos);

    return 0;
}
