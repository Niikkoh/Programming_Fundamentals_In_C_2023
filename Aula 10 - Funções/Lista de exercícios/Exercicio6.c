#include <stdio.h>

int testaTipoChar (char c);

int main()
{

    char c;

    scanf("%c", &c);

    printf("\n%d", testaTipoChar(c));

    return 0;
}

int testaTipoChar (char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return 1;
        return 3;
    }
    else if(c >= 'a' && c <= 'z')
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return 2;
        return 4;
    }
    else if(c >= '0' && c <= '9')
        return 5;
    return 0;
}
