
#ifndef _IMAGE_LIB_
#define _IMAGE_LIB_

/*=============================*/

#define LARG 10
#define ALT 10

#define DIMENSAO_REDUZIDA 2

/*=============================*/

typedef struct
{
    int largura;
    int altura;
    unsigned char** dados;
} GSImage;

/*=============================*/

void criaImagem ();

GSImage* criaGSImage (int largura, int altura);
void destroiGSImage (GSImage* img);

GSImage* reduzPelaMetade (GSImage* img);

/*=============================*/

#endif // _IMAGE_LIB_
