#include "biblio.h"
int main()
{
    int dim, k;
    float d;
    scanf("%d", &dim);
    scanf("%d", &k);
    scanf("%f", &d);
    int *v=adaugare(dim, k, d);
    afisare(v, dim);
    int *h;
    frecv(v, dim, h);
    afisare(h, dim);
    free(v);
    free(h);
    return 0;
}
