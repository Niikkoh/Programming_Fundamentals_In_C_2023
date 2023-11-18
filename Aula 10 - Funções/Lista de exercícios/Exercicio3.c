#include <stdio.h>

int proxFibonacci (int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("\n%d", proxFibonacci(n));

    return 0;
}

int proxFibonacci (int n)
{
    int numA = 0, numB = 1;

    if(n <= 0)
        return 0;

    while(numB < n)
    {
        numB += numA;
        numA = numB - numA;
    }
    return numB;
}
