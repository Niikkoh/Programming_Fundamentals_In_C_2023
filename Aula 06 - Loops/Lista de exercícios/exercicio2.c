#include <stdio.h>

#define CENTENA 100 // Para cálculos que envolvam isolar as casas decimais na esquerda, ou direita, da centena de um numero
#define LIMITE 9999 // O limite do loop responsável pela verificação das características descrita no enunciado

int main()
{

    int i;

    /*Verifica quais números naturais na casa das unidades de milhar que possui as caracteristicas do enunciado*/

    for(i = 1000; i < LIMITE; i++)
    {
        if(i == (i / CENTENA + i % CENTENA) * (i / CENTENA + i % CENTENA))
            printf("%d\n",i);
    }

    return 0;
}
