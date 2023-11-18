#include "ordene.h"

/*====================*/

MaMeMe classifica (float n1, float n2, float n3)
{
    MaMeMe v;

    if(n1 >= n2 && n1 >= n3)
    {
        v.maior = n1;
        if(n2 >= n3)
        {
            v.meio = n2;
            v.menor = n3;
        }
        else
        {
           v.meio = n3;
           v.menor = n2;
        }
    }
    else if(n2 >= n3)
    {
        v.maior = n2;
        if(n1 >= n3)
        {
            v.meio = n1;
            v.menor = n3;
        }
        else
        {
            v.meio = n3;
            v.menor = n1;
        }
    }
    else
    {
        v.maior = n3;
        if(n1 >= n2)
        {
            v.meio = n1;
            v.menor = n2;
        }
        else
        {
            v.meio = n2;
            v.menor = n1;
        }
    }

    return v;
}

void classifica2 (MaMeMe* valores)
{
    int n1, n2, n3;

    n1 = valores->maior;
    n2 = valores->meio;
    n3 = valores->menor;

    if(n1 >= n2 && n1 >= n3)
    {
        valores->maior = n1;
        if(n2 >= n3)
        {
            valores->meio = n2;
            valores->menor = n3;
        }
        else
        {
           valores->meio = n3;
           valores->menor = n2;
        }
    }
    else if(n2 >= n3)
    {
        valores->maior = n2;
        if(n1 >= n3)
        {
            valores->meio = n1;
            valores->menor = n3;
        }
        else
        {
            valores->meio = n3;
            valores->menor = n1;
        }
    }
    else
    {
        valores->maior = n3;
        if(n1 >= n2)
        {
            valores->meio = n1;
            valores->menor = n2;
        }
        else
        {
            valores->meio = n2;
            valores->menor = n1;
        }
    }
}
