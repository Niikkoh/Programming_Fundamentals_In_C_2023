#include <stdio.h>

unsigned int inverteNum (unsigned int n);

int main()
{
    unsigned int n;

    scanf("%u", &n);

    printf("%u", inverteNum(n));

    return 0;
}

unsigned int inverteNum (unsigned int n)
{
    unsigned int nInv = 0;

    while(n != 0)
    {
        nInv *= 10;
        nInv += n % 10;
        n /= 10;
    }
    return nInv;
}
