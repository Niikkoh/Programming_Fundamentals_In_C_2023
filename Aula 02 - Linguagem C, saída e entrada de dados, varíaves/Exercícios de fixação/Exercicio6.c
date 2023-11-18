#include <stdio.h>

int main ()
{
    int primeiro = 10,
    segundo = 20,
    terceiro;

    terceiro = primeiro;
    primeiro = segundo;
    segundo = terceiro;

    printf("Primeiro: %d\nSegundo: %d",primeiro,segundo);

return 0;
}
