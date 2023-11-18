
#ifndef _DADOS_LIB_
#define _DADOS_LIB_

/*===========================*/

#define ROLAGENS 100
#define ALTURA 8
#define LARGURA 6

/*===========================*/


int avaliaDado (int* rolagens, int n);
int analisa (int*** in, int largura, int altura, int** out);

int* geraValoresDado (int n);
int** geraMatriz (int largura, int altura);
int*** geraCaixaDados (int largura, int altura, int n);

void printaValoresDado (int* rolagens, int n);
void printaDadosAprovados (int** dadosAprovados, int largura, int altura);

void freeMatriz (int **matriz, int altura);
void freeCaixaDados (int ***caixaDados, int largura, int altura);

/*===========================*/

#endif // _DADOS_LIB_
