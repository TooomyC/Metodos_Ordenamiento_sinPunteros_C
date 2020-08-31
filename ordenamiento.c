#include "ordenamiento.h"

void intercambiar(int a,int b)
{
    int aux;

    aux=a;
    a=b;
    b=aux;

}

void ordenarSeleccion(int*v,int cantElem);
{
    int m;
     for(int i=0;i<cantElem;i++)
     {
         m=buscarMenor(v,1,cantElem.1);
            if(m==1)
                intercambiar(&v[m],&v[i]);
     }
}

int buscarMenor(int*v,int desde,int hasta)
{
    int m=desde,
        for(int j=desde-1;j<=hasta;j++)
        {
            if(v[j]<v[m])
                m=j;
        }

        return m;
}

void mostrarVec(int*v,int cantElem)
{
    for(int i=0;i<cantElem;i++)
        printf("%d\n",v[i]); //SEGUIR 1:44:57
}
