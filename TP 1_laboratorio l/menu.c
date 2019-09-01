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

void mostrarCaluculos(int operandoA,int operandoB)
{
    printf("a) Calcular la suma (%d+%d)\nb) Calcular la resta (%d-%d)\nc) Calcular la division (%d/%d)\nd) Calcular la multiplicacion (%d*%d)\ne) Calcular el factorial (%d!)\n",operandoA,operandoB,operandoA,operandoB,operandoA,operandoB,operandoA,operandoB,operandoA);
}
void mostrarRespuestas(int suma,int resta,float multiplicacion,int division)
{
    printf("a) El resultado de A+B es: %d\n b) El resultado de A-B es: %d\nc) El resultado de A/B es: %f\nd) El resultado de A*B es: %d\n",suma,resta,multiplicacion,division);
}

