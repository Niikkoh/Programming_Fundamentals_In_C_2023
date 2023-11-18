#include <stdio.h>
#include <stdlib.h>

#include "prova.h"

/*=================*/

int** alocaProva (int n_questoes, int n_itens)
{
    int **prova, i;

    prova = (int**) malloc (sizeof(int*) * N_QUESTOES);
    for(i=0; i < N_QUESTOES; i++)
        prova[i] = (int*) malloc (sizeof(int*) * N_ITENS);

    return prova;
}

int** preencheProva (int n_questoes, int n_itens)
{
    int **prova, i, j,
    provaFixo[N_QUESTOES][N_ITENS] = PROVA_ALUNO;

    prova = alocaProva (N_QUESTOES, N_ITENS);

    for(i = 0; i < n_questoes; i++)
        for(j=0; j < n_itens; j++)
            prova[i][j] = provaFixo[i][j];

    return prova;
}

int** preencheGabarito (int n_questoes, int n_itens)
{
    int** gabarito, i, j,
    gabaritoFixo[N_QUESTOES][N_ITENS] = GABARITO;

    gabarito = alocaProva(N_QUESTOES, N_ITENS);

    for(i = 0; i < n_questoes; i++)
        for(j=0; j < n_itens; j++)
            gabarito[i][j] = gabaritoFixo[i][j];

    return gabarito;
}

void corrigeProva (Candidato* c, int** gabarito, int n_questoes, int n_itens)
{
    int i,j;
    float notaQuestao, notaItem, contador;

    notaQuestao = (float) NOTA_TOTAL / n_questoes;
    notaItem = notaQuestao / n_itens;

    c->nota = 0;

    for(i=0; i < n_questoes; i++)
    {
        contador = notaQuestao;
        for(j=0; j < n_itens; j++)
        {
            if(c->prova[i][j] == RESPOSTA_EM_BRANCO)
                contador -= notaItem;
            else if(c->prova[i][j] != gabarito[i][j])
                contador -= notaItem * 2;
        }
        if(contador < 0)
            contador = 0;

        c->nota += contador;
    }
}

void computaResultados (Candidato* candidatos, int n, int** gabarito)
{
    int i;

    for (i = 0; i < n; i++)
    {
        corrigeProva (&(candidatos[i]), gabarito, N_QUESTOES, N_ITENS);

    if (candidatos[i].nota >= NOTA_FASE2)
        convocaParaFase2 (candidatos[i].nome, candidatos[i].email, candidatos[i].nota);
    }
}

void convocaParaFase2 (char* nome, char* email, float nota)
{
    printf("Email: %s\n\n", email);
    printf("Meus parabens, %s\n", nome);
    printf("Voce esta aprovado para a segunda fase, com nota de corte de %.1f\n", nota);


}
