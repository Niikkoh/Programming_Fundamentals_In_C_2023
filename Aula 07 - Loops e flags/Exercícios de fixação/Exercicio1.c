#include <stdio.h>

#define INTERVALO_MIN 10 //Define o valor minimo no intervalo da condi��o
#define INTERVALO_MAX 20 //Define o valor maximo no intervalo da condi��o

int main()
{

    int valorInteiro;

    /*Garante que a mensagem ECO X ira mostrar na tela at� a entrada
      n�o estiver mais dentro do intervalo*/

    scanf("%d", &valorInteiro);
    while(INTERVALO_MIN <= valorInteiro && valorInteiro <= INTERVALO_MAX)
    {
        printf("ECO %d\n", valorInteiro);
        scanf("%d", &valorInteiro);
    }

    return 0;
}
