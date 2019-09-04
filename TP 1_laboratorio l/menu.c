#include <stdio.h>
#include "menu.h"
#include "calculos.h"
#include "funcionesAux.h"

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

                printf("a) Calcular la suma (%d+%d)\n",operandoA,operandoB);
                printf("b) Calcular la resta (%d-%d)\n",operandoA,operandoB);
                printf("c) Calcular la division (%d/%d)\n",operandoA,operandoB);
                printf("d) Calcular la multiplicacion (%d*%d)\n",operandoA,operandoB);
                printf("e) Calcular el factorial (%d!) y de (%d!)\n",operandoA,operandoB);

                estado=1;
    return estado;
}


int mostrarRespuestas(int operandoA,int operanndoB,int funcionamiento)
{
    int estado;

    if(funcionamiento == 0)
    {
        printf("no se pudo\n");
        estado=0;

    }else{
        calculoSumarMostrar("a) El resultado de",operandoA,operanndoB);
        calculoRestarMostrar("b) El resultado de",operandoA,operanndoB);
        calculoDividirMostrar("c) El resultado de",operandoA,operanndoB);
        calculoMultiplicarMostrar("d) El resultado de",operandoA,operanndoB);
        calculoFactorialMostrar("e) El factorial de",operandoA);
        calculoFactorialMostrar(" y El factorial de",operanndoB);

        estado=1;
    }

    return estado;

}

