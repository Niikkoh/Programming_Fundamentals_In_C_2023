#include <stdio.h>

int main()
{
    /*Entrada de dados*/

    int dividendo, divisor, quociente;

    scanf("%d", &dividendo);
    scanf("%d", &divisor);

    /*Calcula o quociente e o resto
      de inteiros sem usar divisão*/
    while(dividendo >= divisor)
    {
        quociente++;
        dividendo -= divisor;
    }

    /*Valor de retorno*/
    printf("Quociente: %d\nResto: %d", quociente, dividendo);

    return 0;
}
