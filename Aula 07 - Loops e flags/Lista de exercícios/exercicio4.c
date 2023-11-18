#include <stdio.h>

#define SEPARA_UNIDADE 10 //para cálculos que envolvam separar unidades do numero

int main()
{

    /*Declara variaveis*/
    unsigned int inteiroPositivo, digito,
                 tem_digito = 0;

    /*Entrada de dados*/
    scanf("%d", &inteiroPositivo);
    scanf("%d", &digito);


    /*Varre todas as casas numericas do numero, ate
    encontrar uma que coincida com o digito*/
    while(inteiroPositivo && !tem_digito)
    {
            if(inteiroPositivo % SEPARA_UNIDADE == digito)
                tem_digito = 1;

            inteiroPositivo /= SEPARA_UNIDADE;
    }

    /*Saida de dados*/
    if(tem_digito)
        printf("O digito esta presente");
    else
        printf("O digito nao esta presente");

    return 0;
}
