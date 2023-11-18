#include "cebolinha.h"

/*=========================*/

void stling(char *s, char *buffer)
{
    int i,j = 0;

    for(i=0; s[i+j] != '\0'; i++)
    {
        if(s[i+j] == 'R')
            buffer[i] = 'L';
        else if(s[i+j] == 'r')
        {
            buffer[i] = 'l';
            if(s[i+j+1] == 'r')
              j++;
        }
        else
            buffer[i] = s[i+j];
    }
    buffer[i] = '\0';
}
