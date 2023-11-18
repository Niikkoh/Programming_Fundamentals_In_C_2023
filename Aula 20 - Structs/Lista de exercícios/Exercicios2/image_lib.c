#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "image_lib.h"

/*=============================*/

void criaImagem ()
{
    int i, j;
    GSImage *imagem, *imagemReduzida;

    imagem = criaGSImage (LARG, ALT);

    for(i=0; i < imagem->altura; i++)
        for(j=0; j < imagem->largura; j++)
            imagem->dados[i][j] = i*j;

    for(i=0; i < imagem->altura; i++)
    {
        for(j=0; j < imagem->largura; j++)
            printf("%d ", imagem->dados[i][j]);
        printf("\n");
    }

    imagemReduzida = reduzPelaMetade(imagem);

    printf("\n\n");

    for(i=0; i < imagemReduzida->altura; i++)
    {
        for(j=0; j < imagemReduzida->largura; j++)
            printf("%d ", imagemReduzida->dados[i][j]);
        printf("\n");
    }
}

GSImage* criaGSImage (int largura, int altura)
{
    GSImage* imagem;
    int i;

    imagem = (GSImage*) malloc (sizeof(GSImage));

    imagem->altura = altura;
    imagem->largura = largura;

    imagem->dados = (unsigned char**) malloc (sizeof(unsigned char*) * altura);

    for(i=0; i < altura; i++)
        imagem->dados[i] = (unsigned char*) malloc (sizeof(unsigned char) * largura);

    return (imagem);
}

GSImage* reduzPelaMetade (GSImage* img)
{

    if(!(img->largura % DIMENSAO_REDUZIDA) && !(img->altura % DIMENSAO_REDUZIDA))
    {
        GSImage* imagemReduz;
        int i,j;

        imagemReduz = criaGSImage(img->largura / DIMENSAO_REDUZIDA, img->altura / DIMENSAO_REDUZIDA);

        for(i=0; i < imagemReduz->altura; i++)
            for(j=0; j < imagemReduz->largura; j++)
            {
                imagemReduz->dados[i][j] = (img->dados[i*2][j*2]   +  img->dados[i*2][j*2+1]
                                          + img->dados[i*2+1][j*2] +  img->dados[i*2+1][j*2+1])/4;
            }
        return imagemReduz;
    }
    else
        return NULL;
}

void destroiGSImage (GSImage* img)
{
    int i;
    for (i = 0; i < img->altura; i++)
        free (img->dados [i]);
    free (img->dados);
    free (img);
}
