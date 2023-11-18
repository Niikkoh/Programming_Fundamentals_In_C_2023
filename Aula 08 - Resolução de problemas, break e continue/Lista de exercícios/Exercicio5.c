#include <stdio.h>

#define MIN_TERMO 0.2 //Define o termo limite da serie harmônica

int main()
{
    int i;
    float somatoria = 0;

    //Enquanto o termo não alcançar o valor minimo pré determinado
    for(i=1; MIN_TERMO <= 1.0/i; i++)
    {
        somatoria += 1.0/i; //O termo é incrementado na somatoria
        printf("%.4f     %.4f\n", 1.0/i, somatoria); //Mostra as informações do termo e da soma na tela
    }

    return 0;
}
