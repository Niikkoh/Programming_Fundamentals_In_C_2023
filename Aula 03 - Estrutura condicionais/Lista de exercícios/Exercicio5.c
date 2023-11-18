#include <stdio.h>

int main ()
{
    /*Entrada de dados e declaração de varíaveis*/

    int n1, n2, n3, aux;
    scanf ("%d %d %d", &n1, &n2, &n3);

    /*Algoritmo para ordenar os dados n1, n2 e n3 em ordem crescente*/

    if (n2 >= n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }

    if (n1 >= n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;

        if (n2 >= n3)
        {
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }

    /*Saída dos dados*/

    printf ("%d %d %d\n", n1, n2, n3);

    return (0);
}
