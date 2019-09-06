#include <stdio.h>
#include "menu.h"
#include "funcionesAux.h"

int validarDatos(int estadoA,int estadoB)
{
    int estado;
    if(estadoA==0 || estadoB==0)
    {
        if(estadoA==0 && estadoB==1)
        {
            printf("Falta ingresar el Dato A\n");
            estado=0;
        }else if(estadoA==1 && estadoB==0)
            {
                printf("Falta ingresar el Dato B\n");
                estado=0;
            }else{
                printf("Falta ingresar el Dato A y el Dato B\n");
                estado=0;
                }
    }else{
            estado=1;
        }

    return estado;
}

int validarPaso(int dato,int estado,int axiliar,int funcionamiento)
{
    if(estado == 0)
    {
        dato = ingresarNumero(dato);
        axiliar = dato;
        funcionamiento = 0;
        estado=1;

    }else{

        dato = ingresarNumero(dato);
        estado = 1;
        if(dato != axiliar)
        {
            axiliar = dato;
            funcionamiento = 0;
        }
    }

    return estado;
}






