#include <stdio.h>
#include <stdlib.h>
#include "ordenamiento.h"
#define TAM_VEC 8

int main()
{
    int x=3,y=5;
    int v[TAM_VEC]={23,1,55,153,5,90,15,4};

        ordenarSeleccion(v,TAM_VEC);
        mostrarVec(v,TAM_VEC);

        intercambiar(x,y);
        printf("\nX:%d, Y:%d",x,y);

        return 0;
}

