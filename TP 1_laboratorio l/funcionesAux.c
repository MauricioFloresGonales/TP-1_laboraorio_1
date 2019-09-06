#include <stdio.h>
#include "funcionesAux.h"

int validarDatos(int estadoA,int estadoB)
{
    int estado;
    if(estadoA==0 || estadoB==0)
    {
        if(estadoA==0 && estadoB==1)
        {
            printf("FALTA INGRESAR EL DATO A\n");
            estado=0;
        }else if(estadoA==1 && estadoB==0)
            {
                printf("FALTA INGRESAR EL DATO B\n");
                estado=0;
            }else{
                printf("FALTA INGRESAR EL DATO A Y EL DATO B\n");
                estado=0;
                }
    }else{
            estado=1;
        }

    return estado;
}





