#include <stdio.h>

int main()
{

    int segundos,minutos,horas,dias;

    printf("   Converte segundos em um horário:\n\n");

    scanf("%d",&segundos);

    minutos = segundos / 60;
    segundos = segundos % 60;

    horas = minutos / 60;
    minutos = minutos % 60;

    dias = horas / 24;
    horas = horas % 24;

    printf("\nO tempo total é de %d dias, %d horas, %d minutos e %d segundos", dias, horas, minutos, segundos);

    return 0;
}
