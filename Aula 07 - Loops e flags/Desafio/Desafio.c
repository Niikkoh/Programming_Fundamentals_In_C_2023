#include <stdio.h>

#define MAXIMO_N 1000

int main()
{
    /*Declara��o de variaveis*/
    int informaChute = 0, chute = 0, //Guarda o numero que a maquina chutou e a informa��o do usuario
        contaTentativas = 0,

    /*Guarda o menor e maior numero poss�vel que o usu�rio pensou*/
        menorPossivel = 0,
        maiorPossivel = MAXIMO_N;

    while(informaChute != 2)
    {
        /*Limita a margem entre os numeros possiveis que o usuario pensou*/
        if(informaChute == 1)
            maiorPossivel = chute;
        else if(informaChute == 3)
            menorPossivel = chute;

        /*Chuta o ponto m�dio no intervalo pr�-limitado*/
        chute = (maiorPossivel + menorPossivel) / 2;

        /*Pergunta ao usuario se o chute esta certo*/
        printf("\nEh o numero %d?\n", chute);
        scanf("%d", &informaChute);

        contaTentativas++;
    }

    printf("\nAcertei!! Tentativas: %d", contaTentativas);

    return 0;
}
