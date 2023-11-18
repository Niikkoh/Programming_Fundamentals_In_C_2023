#include <stdio.h>

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4);

int main()
{

    int n1, n2, n3, n4;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("%d", ehProgressaoAritmetica(n1,n2,n3,n4));

    return 0;
}

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4)
{
    if(n2 - n1 == n3 - n2 && n3 - n2 == n4 - n3)
        return 1;
    return 0;
}
