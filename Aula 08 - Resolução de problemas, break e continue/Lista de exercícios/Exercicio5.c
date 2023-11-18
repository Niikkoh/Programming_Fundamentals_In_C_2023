#include <stdio.h>

#define MIN_TERMO 0.2 //Define o termo limite da serie harm�nica

int main()
{
    int i;
    float somatoria = 0;

    //Enquanto o termo n�o alcan�ar o valor minimo pr� determinado
    for(i=1; MIN_TERMO <= 1.0/i; i++)
    {
        somatoria += 1.0/i; //O termo � incrementado na somatoria
        printf("%.4f     %.4f\n", 1.0/i, somatoria); //Mostra as informa��es do termo e da soma na tela
    }

    return 0;
}
