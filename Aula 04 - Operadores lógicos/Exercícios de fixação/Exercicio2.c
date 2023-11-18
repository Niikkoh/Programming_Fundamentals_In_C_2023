#include <stdio.h>

int main()
{
    int inteiro;

    scanf ("%d",&inteiro);

    if((inteiro % 2 == 0 && inteiro > 10) || (inteiro % 2 == 1 && inteiro < 50))
        printf("SIM");
    else
        printf("NAO");

    return 0;
}
