#include <stdio.h>

int main()
{
    /*Entrada de dados*/

    float comprimentoAB, comprimentoBC, comprimentoAC;

    scanf("%f %f %f", &comprimentoAB, &comprimentoBC, &comprimentoAC);


    if(comprimentoAB > 0 && comprimentoAC > 0 && comprimentoBC > 0) //Verifica se os comprimentos sao validos em um triangulo
    {
        /*Verifica se eh um triangulo escaleno*/
        if(comprimentoAB != comprimentoAC && comprimentoAB != comprimentoBC && comprimentoAC != comprimentoBC)
            printf("Triangulo Escaleno");

        /*Verifica se eh um triangulo equilatero*/
        else if(comprimentoAB == comprimentoAC && comprimentoAB == comprimentoBC)
            printf("Triangulo Equilatero");

        /*Caso um triangulo não seja escaleno ou equilatero, ele será isosceles*/
        else
            printf("Triangulo Isosceles");
    }
    else
        printf("Os valores inseridos sao invalidos");

    return 0;
}
