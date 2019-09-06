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


int mostrarRespuestas(int operandoA,int operanndoB ,int suma ,int resta ,float division ,int multiplicacion ,int factorialA ,int factorialB ,int funcionamiento)
{
    int estado;

    if(funcionamiento == 0)
    {
        printf("FALTA CALCULAR LAS CUENTAS\n");
        estado=0;

    }else{
        mostrarSuma("El resultado de ",operandoA,operanndoB,suma);
        mostrarResta("El resultado de ",operandoA,operanndoB,resta);
        mostrarDivision("El resultado de ","No es posible dividir por cero",operandoA,operanndoB,division);
        mostrarMultiplicacion("El resultado de ",operandoA,operanndoB,multiplicacion);
        mostrarFactorial("El resultado de ","no se puede factoriar un numero menor a cero","No estoy preparada para factoriar un numero mayor a 12",operandoA,factorialA);
        mostrarFactorial("El resultado de ","no se puede factoriar un numero menor a cero","No estoy preparada para factoriar un numero mayor a 12",operanndoB,factorialB);

        estado=1;
    }

    return estado;

}

