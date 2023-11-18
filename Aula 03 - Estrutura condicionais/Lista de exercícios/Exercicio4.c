#include <stdio.h>

int main ()
{

    /*Entrada de dados*/

    int horaInicial, horaFinal, minutoInicial, minutoFinal,
        duracaoHora,duracaoMinuto;

    printf("\t Calcula duracao de um jogo\n\n");

    printf("Hora(s) que iniciou o evento: ");
    scanf("%d",&horaInicial);

    printf("Minuto(s) que iniciou o evento: ");
    scanf("%d",&minutoInicial);

    printf("Hora(s) que terminou o evento: ");
    scanf("%d", &horaFinal);

    printf("Minuto(s) que teminou o evento: ");
    scanf("%d", &minutoFinal);

    /* Calcula a duração em horas do evento*/

    if(horaInicial < horaFinal)
        duracaoHora = horaFinal - horaInicial;
    else
        duracaoHora = (24 - horaInicial) + horaFinal;

    /* Calcula a duração em minutos do evento*/

    if(minutoInicial <= minutoFinal)
        duracaoMinuto = minutoFinal - minutoInicial;
    else
    {
        duracaoMinuto = (60 - minutoInicial) + minutoFinal;
        duracaoHora = duracaoHora + 1;
    }


    printf("\n\nO jogo durou %d hora(s) e %d minuto(s)", duracaoHora, duracaoMinuto);

    return 0;
}
