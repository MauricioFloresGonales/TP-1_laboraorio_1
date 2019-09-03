#include <stdio.h>
#include "menu.h"
#include "calculos.h"

int ingresarNumero(int numeroIngresado)
{
    int numero;

    printf("ingrese un numero: ");
    scanf("%d",&numero);

    return numero;
}

int mostrarCaluculos(int operandoA,int operandoB,int estadoA,int estadoB)
{
    int estado;

    if(estadoA==0 || estadoB==0)
    {
        if(estadoA==0)
        {
            printf("Falta ingresar el dato A\n");
        }else{
            printf("Falta ingresar el dato B\n");
        }

        estado=0;

    }else{
        printf("a) Calcular la suma (%d+%d)\nb) Calcular la resta (%d-%d)\nc) Calcular la division (%d/%d)\nd) Calcular la multiplicacion (%d*%d)\ne) Calcular el factorial (%d!)\n",operandoA,operandoB,operandoA,operandoB,operandoA,operandoB,operandoA,operandoB,operandoA);
        estado=1;
    }
    return estado;
}
int mostrarRespuestas(int suma,int resta,float multiplicacion,int division,int funcionamiento)
{
    int estado;

    if(funcionamiento == 0)
    {
        printf("no se pudo\n");
        estado=0;

    }else{
        printf("a) El resultado de A+B es: %d\n",suma);
        printf("b) El resultado de A-B es: %d\n",resta);
        printf("c) El resultado de A/B es: %f\n",multiplicacion);
        printf("d) El resultado de A*B es: %d\n",division);

        estado=1;
    }

    return estado;

}

