#include <stdio.h>

int main()
{
    int inteiro;

    scanf("%d",&inteiro);

    if(inteiro & 0x0001)
        printf("\nNumero eh impar");
    else
        printf("\nNumero eh par");

    return 0 ;
}
