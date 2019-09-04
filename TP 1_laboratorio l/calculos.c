#include <stdio.h>
#include "calculos.h"

int calculoSumar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA+operandoB;
    return respuesta;
}

void calculoSumarMostrar(char mensaje[],int operandoA,int operandoB)
{
    int respuesta;

    respuesta = calculoSumar(operandoA,operandoB);

    printf("%s %d+%d es:%d\n",mensaje,operandoA,operandoB,respuesta);

}

int calculoRestar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA-operandoB;
    return respuesta;
}

void calculoRestarMostrar(char mensaje[],int operandoA,int operandoB)
{
    int respuesta;

    respuesta = calculoRestar(operandoA,operandoB);

    printf("%s %d-%d es: %d\n",mensaje,operandoA,operandoB,respuesta);

}

float calculoDividir(int operandoA,int operandoB)
{
    float respuesta;

    respuesta=(float)operandoA/operandoB;

    return respuesta;
}

void calculoDividirMostrar(char mensaje[],int operandoA,int operandoB)
{
    float respuesta;

    if(operandoB == 0)
    {
        printf("No se puede dividir entre cero\n");
    }else{

        respuesta = calculoDividir(operandoA,operandoB);

        printf("%s %d/%d es: %f\n",mensaje,operandoA,operandoB,respuesta);
    }
}

int calculoMultiplicar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA*operandoB;
    return respuesta;
}

void calculoMultiplicarMostrar(char mensaje[],int operandoA,int operandoB)
{
    int respuesta;

    respuesta = calculoMultiplicar(operandoA,operandoB);

    printf("%s %d*%d es: %d\n",mensaje,operandoA,operandoB,respuesta);

}

int calcularFactorial(int operando)
{
    unsigned int resultado;

    if(operando== 0)
    {
        resultado = 1;
    }else{
        resultado=operando*calcularFactorial(operando-1);
    }
    return resultado;
}

void calculoFactorialMostrar(char mensaje[],int operando)
{
    unsigned int respuesta;

    respuesta = calcularFactorial(operando);

    printf("%s %d es: %d\n",mensaje,operando,respuesta);

}
