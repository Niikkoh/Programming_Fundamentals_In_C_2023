/*
ROTEIRO:
1. Explicar o problema. Mostrar exemplo. Abstrair que "a parte da imagem a gente vê depois".
2. Começar do zero a definir o tipo Bola. Ressaltar a diferença entre tipo e variável.
3. Criar e preencher uma variável do tipo Bola.
4. Criar e preencher um vetor de Bolas.
5. Puxar o código com TODOs.
6. Explicação alto nível do tipo Imagem3C. Perguntar sobre e mostrar a criaImagem3C.
7. Repassar passo a passo até chegar no 1o. TODO (função limpaImagem3C).
8. Chegar no 2o TODO (chamada da desenhaCirculo). Começar indexando o vetor, depois passa para Bola* b = &bolinhas [j];
9. Chegar no 3o TODO.
10. Ir até o fim, perguntar sobre e mostrar a destroiImagem3C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "imagem.h"

/*===========================================================================*/

#define IMG_WIDTH 1280
#define IMG_HEIGHT 720

#define N_BOLAS 10
#define N_CICLOS 100

#define RAIO_MIN 10
#define RAIO_MAX 40

#define VEL_MIN 1
#define VEL_MAX 20

#define MIN(a,b)((a<b)?a:b)
#define MAX(a,b)((a>b)?a:b)

/*===========================================================================*/

typedef struct
{
    float x;
    float y;
    float vx;
    float vy;
    int raio;
    unsigned char cor [3];

} Bola;

/*===========================================================================*/
/* Funções Auxiliares                                                        */
/*===========================================================================*/

void limpaImagem3C (Imagem3C* img)
{
    // TODO: fazer código: p/ cada canal, p/ cada linha, p/ cada coluna, zera.
    int channel, row, col;

    for (channel = 0; channel < 3; channel++)
        for (row = 0; row < img->altura; row++)
            for (col = 0; col < img->largura; col++)
                img->dados [channel][row][col] = 0;
}

/*---------------------------------------------------------------------------*/

void desenhaCirculo (Imagem3C* img, int x, int y, int raio, unsigned char cor [3])
{
    int row, col, channel;

    for (row = MAX (0,y-raio); row <= MIN((int)img->altura-1,y+raio); row++)
    {
        for (col = MAX(0,x-raio); col <= MIN((int)img->largura-1,x+raio); col++)
        {
            int dist_y = row-y;
            int dist_x = col-x;
            if (sqrt (dist_y*dist_y + dist_x*dist_x) <= raio)
                for (channel = 0; channel < 3; channel++)
                    img->dados [channel][row][col] = cor [channel];
        }
    }
}

/*===========================================================================*/

int main()
{
    int i, j;
    Imagem3C* canvas = criaImagem3C (IMG_WIDTH, IMG_HEIGHT);
    Bola bolinhas [N_BOLAS];
    char filename [128];

    // "Cria" as bolinhas - na verdade, só inicializa cada uma no vetor.
    for (i = 0; i < N_BOLAS; i++)
    {
        // Raio, posição, velocidade e cor aleatórios.
        bolinhas [i].raio = RAIO_MIN + rand () % (RAIO_MAX-RAIO_MIN);
        bolinhas [i].x = rand () % IMG_WIDTH;
        bolinhas [i].y = rand () % IMG_HEIGHT;
        bolinhas [i].vx = VEL_MIN + (rand ()/(float)RAND_MAX)*(VEL_MAX-VEL_MIN);
        if (rand () % 2)
            bolinhas [i].vx *= -1;
        bolinhas [i].vy = VEL_MIN + (rand ()/(float)RAND_MAX)*(VEL_MAX-VEL_MIN);
        if (rand () % 2)
            bolinhas [i].vy *= -1;
        for (j = 0; j < 3; j++)
            bolinhas [i].cor [j] = 128 + rand ()%128; // 128 + [0:128), para não ficar escuro.
    }

    // Repete várias vezes...
    for (i = 0; i < N_CICLOS; i++)
    {
        limpaImagem3C (canvas);

        // Desenha.
        for (j = 0; j < N_BOLAS; j++)
        {
            // TODO: chama a função desenhaCirculo para a bolinha na posição j.
            Bola* b = &bolinhas [j];
            desenhaCirculo (canvas, b->x, b->y, b->raio, b->cor);
        }

        // Salva.
        sprintf (filename, "frame%2d.bmp", i);
        salvaImagem3C (canvas, filename);

        // Atualiza as posições.
        for (j = 0; j < N_BOLAS; j++)
        {
            // TODO
            bolinhas [j].x += bolinhas [j].vx;
            bolinhas [j].y += bolinhas [j].vy;
        }
    }

    destroiImagem3C (canvas);

    return 0;
}


/*===========================================================================*/
