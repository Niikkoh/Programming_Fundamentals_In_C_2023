#include <stdio.h>

int main()
{
    int numAnterior, numMeio, numProximo,
        i, tamanhoN, temUmPico = 1;

    scanf("%d", &tamanhoN); //Entra o tamanho da sequencia

    //Informa os primeiros dois numeros
    scanf("%d", &numAnterior);
    scanf("%d", &numMeio);

    //Enquanto não percorrer toda a altura da montanha
    for(i = 2; i < tamanhoN; i++)
    {
        scanf("%d", &numProximo); //Informa o novo numero percorrido

        //Se o numero do meio for menor que ambos os outros 2
        if(numAnterior > numMeio && numMeio < numProximo)
            temUmPico = 0; //Confirma que existe mais de 1 pico na montanha

        numAnterior = numMeio; //Atualiza o numero anterior
        numMeio = numProximo; //Atualiza o numero do meio
    }

    //Retorna se a sequencia tem um picos
    if(temUmPico)
        printf("\nS");
    else
        printf("\nN");

    return 0;
}
