#include <stdio.h>

int main()
{
    int numAnt = 0, numAtual = 1,
        termos, i;

    //L� a quantidade N de termos da sequ�ncia
    scanf("%d", &termos);

    //Printa os primeiros 2 termos
    printf("Sequencia: 0, 1,");

    //Enquanto calcular os termos um por um um at� N
    for(i=2; i < termos; i++)
    {
        numAtual += numAnt; //o termo atual recebe a soma do anterior
        numAnt = numAtual - numAnt; //O termo anterior recebe o termo atual menos ele mesmo

        printf(" %d,", numAtual);//Printa o novo termo na tela
    }

    return 0;
}
