#include <stdio.h>

int main()
{
    /*Declara��o de variaveis*/
    int numeroInteiro, numeroAnterior = 0, contador = 0, maiorSequencia = 0;

    /*Enquanto a entrada for um numero positivo, ela n�o saira do loop*/
    scanf("%d", &numeroInteiro);
    while(numeroInteiro > 0)
    {
        /*Se o numero N ser� maior que o numero N-1 da sequencia*/
        if(numeroInteiro > numeroAnterior)
        {
            contador++;
            if(contador > maiorSequencia)
                maiorSequencia++;
        }
        else
            contador = 1; //Quebrou a sequencia, recome�a

        numeroAnterior = numeroInteiro; //Guarda o numero inteiro antes da atualiza��o de entrada

        scanf("%d", &numeroInteiro); //Entrada do novo numero
    }

    printf("\nMaior sequencia: %d", maiorSequencia); //Saida dos dados

    return 0;
}
