#include <stdio.h>

unsigned long long potencia (unsigned int base, unsigned int expoente);

int main()
{

    unsigned int base, expoente;

    scanf("%u %u", &base, &expoente);

    printf("%llu", potencia(base, expoente));

    return 0;
}

unsigned long long potencia (unsigned int base, unsigned int expoente)
{
    unsigned int i, resultado;

    resultado = base;
    for(i=1;i < expoente; i++)
        resultado *= base;
    return resultado;
}
