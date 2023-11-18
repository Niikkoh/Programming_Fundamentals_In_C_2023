#include <stdlib.h>
#include <stdio.h>

#include "pack_string.h"

char* empacotaString (char* texto)
{
    char* textoEmpacotado;
    int i, tamanhoTexto;

    for(i = 0; texto[i] != '\0'; i++);

    tamanhoTexto = i;
    textoEmpacotado = (char*) malloc (sizeof(char) * tamanhoTexto);

    for(i = 0; i < tamanhoTexto; i++)
        textoEmpacotado[i] = texto[i];

    return textoEmpacotado;
}
