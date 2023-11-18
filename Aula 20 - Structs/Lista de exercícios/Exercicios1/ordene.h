
#ifndef _ORDENE_
#define _ORDENE_

/*====================*/

#define A 2
#define B 3
#define C 4

/*====================*/

typedef struct
{
    int menor;
    int maior;
    int meio;

}MaMeMe;

/*====================*/

MaMeMe classifica (float n1, float n2, float n3);
void classifica2 (MaMeMe* valores);

/*====================*/

#endif // _ORDENE_
