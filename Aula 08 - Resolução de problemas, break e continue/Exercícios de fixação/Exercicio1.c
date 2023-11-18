#include <stdio.h>

int main ()
{

    unsigned int base, expoente;
    unsigned long long total = 0;

    scanf ("%u", &base);
    scanf ("%u", &expoente);

    while (expoente > 1)
    {
        base *= base;
        expoente--;
    }

    total = base;

    printf ("%llu\n", total);

    return (0);
}

