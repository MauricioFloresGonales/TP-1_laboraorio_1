#include <stdio.h>
#include "calculos.h"

int calculoSumar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA+operandoB;
    return respuesta;
}

int calculoRestar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA-operandoB;
    return respuesta;
}

float calculoDivisidir(int operandoA,int operandoB)
{
    float respuesta;
    respuesta=operandoA/(float)operandoB;
    return respuesta;
}

int calculoMultiplicar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA*operandoB;
    return respuesta;
}
