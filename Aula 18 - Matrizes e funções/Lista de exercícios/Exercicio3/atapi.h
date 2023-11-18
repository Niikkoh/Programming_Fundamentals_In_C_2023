
#ifndef _ATAPI_
#define _ATAPI_

/*================*/

#define N_AEROPORTOS 6
#define N_VOOS 5

/*================*/

void geraMatrizAdjacencia (int voos [][2], int matrizAdjacencia[][N_AEROPORTOS]);
void geraMatrizVoo (int matrizAdjacencia[][N_AEROPORTOS], int voos [][2]);

int aeroportoMaiorConexoes(int matrizAdjacencia[][N_AEROPORTOS]);

int calculaConexoes(int matrizAdjacencia[][N_AEROPORTOS], int conexao1, int conexao2);

void adjacenciaAoQuadrado (int matrizAdjacencia[][N_AEROPORTOS]);

void printMatrizAdjacencia (int matrizAdjacencia[][N_AEROPORTOS], int linha, int coluna);
void printMatrizVoo (int voos [][2], int linha, int coluna);

/*================*/

#endif // _ATAPI_
