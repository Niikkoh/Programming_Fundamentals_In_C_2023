#include <stdio.h>

#define LIMITE_ARREDONDAMENTO 0.5

int arredonda (double x);

int main()
{

    double x;

    scanf("%lf", &x);

    printf("\n%d", arredonda(x));

    return 0;
}

int arredonda (double x)
{
    if(x >= 0)
    {
        if(LIMITE_ARREDONDAMENTO > x - (int)x)
            return (int)x;
        else
            return (int)x + 1;
    }
    else
        if(LIMITE_ARREDONDAMENTO > (int)x - x)
            return (int)x;
        else
            return (int)x - 1;
}
