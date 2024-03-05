#include "biblio.h"

void functie(int *x)
{
    *x=rand();
}

void afisare(int *v, int dim)
{
    printf("\n%d\n\n", dim);

    for(int i=0; i<dim; i++)
        printf("%d\n", *(v+i));
}

int* adaugare(int dim, int k, float d)
{
    int *v=(int *)malloc(dim*sizeof(int));
    for(int i=0; i<dim; i++)
        *(v+i)=rand();
    for(int i=0; i<dim; i++)
        *(v+i)=((k+k)*(*(v+i))/32767)-k;
    int numar=d*dim, nr=0, ok=0;
    for(int i=0; i<dim; i++)
    {
        if(nr>=numar)
            ok=1;
        if(ok==1)
            *(v+i)=0;
        if(*(v+i))
            nr++;
    }
    return v;
}

void frecv(int *v, int dim, int *h)
{
    h=(int*)calloc(2*dim, sizeof(int));
    for(int i=0;i<dim;i++)
        {
            if(*(v+i)>=0)
                *(h+(*(v+i)))=*(h+(*(v+i)))+1;
            else
                *(h-(*(v+i))+dim)=*(h-(*(v+i))+dim)+1;
        }
}

