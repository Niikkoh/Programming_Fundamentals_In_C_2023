
#ifndef _PROVA_
#define _PROVA_

/*=================*/

#define NOTA_TOTAL 100

#define RESPOSTA_EM_BRANCO -1

#define N_QUESTOES 4
#define N_ITENS 5

#define NOTA_FASE2 50

#define GABARITO {{1, 0, 0, 1, 0}, {0, 1, 1, 0, 0}, {1, 0, 0, 1, 1}, {0, 1, 1, 1, 0}}

#define PROVA_ALUNO {{1, 0, 0, 1, 0}, {0, 1, 1, -1, -1}, {-1, 0, 0, 1, 0}, {1, 0, 1, 1, 1}}
#define NOME_ALUNO "Nicolas"
#define EMAIL_ALUNO "nicolas.pereira2000vp@gmail.com"

/*=================*/

typedef struct
{
    int numero;
    char* nome;
    char* email;
    char* endereco;
    int** prova;
    float nota;

} Candidato;

/*=================*/

int** alocaProva (int n_questoes, int n_itens);

int** preencheProva (int n_questoes, int n_itens);
int** preencheGabarito (int n_questoes, int n_itens);

void corrigeProva (Candidato* c, int** gabarito, int n_questoes, int n_itens);
void computaResultados (Candidato* candidatos, int n, int** gabarito);

void convocaParaFase2 (char* nome, char* email, float nota);

/*=================*/

#endif // _PROVA_
