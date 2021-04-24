#include <stdio.h>
#include <stdlib.h>

#define DIM 5

double somTablo(float [], int);
double somTablov2(float *, int);


int main()
{
    float t[5]= {10,20,30,40,50};

    double tot =  somTablov2(t, DIM);
    printf("Somme :  %lf", tot);
    return 0;
}

double somTablov2(float *pt , int dim)
{   float *adt =NULL;
    double som=0.0;

    for (adt=pt; adt < pt + dim; adt++)
    {
        som+= *adt;
    }
    return som;

}

double somTablo(float t[] , int dim)
{
    double som=0.0;
    for (int i=0; i < dim; i++)
    {
        som+= t[i];
    }
    return som;

}
