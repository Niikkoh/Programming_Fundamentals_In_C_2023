#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "prova.h"

/*=======================*/

int main()
{
    Candidato aluno;
    int **gabarito;

    aluno.prova = preencheProva (N_QUESTOES, N_ITENS);
    gabarito = preencheGabarito (N_QUESTOES, N_ITENS);

    aluno.nome = (char*) malloc (sizeof(char) * strlen(NOME_ALUNO));
    strcpy(aluno.nome, NOME_ALUNO);

    aluno.email = (char*) malloc (sizeof(char) * strlen(EMAIL_ALUNO));
    strcpy(aluno.email, EMAIL_ALUNO);

    computaResultados(&aluno, 1, gabarito);


    return 0;
}
