#include <stdio.h>
#include "calculos.h"

//              -SUMA-

int calculoSumar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA+operandoB;
    return respuesta;
}

void mostrarSuma(char mensaje[],int operandoA, int operandoB, int respuesta)
{
    printf("%s %d+%d es: %d\n",mensaje,operandoA,operandoB,respuesta);
}

//---------------------------------------------------------------------------------------------------------------------------------------------

//              -RESTA-

int calculoRestar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA-operandoB;
    return respuesta;
}

void mostrarResta(char mensaje[],int operandoA, int operandoB, int respuesta)
{
    printf("%s %d-%d es: %d\n",mensaje,operandoA,operandoB,respuesta);
}

//---------------------------------------------------------------------------------------------------------------------------------------------

//         -DIVISION-

float calculoDividir(int operandoA,int operandoB)
{
    float respuesta;

    respuesta=(float)operandoA/operandoB;

    return respuesta;
}

void mostrarDivision(char mensajeCorrecto[],char mensajeError[],int operandoA,int operandoB ,float respuesta)
{
    if(operandoB < 0)
    {
        printf("%s",mensajeError);
    }else{
        printf("%s %d/%d es: %f\n",mensajeCorrecto,operandoA,operandoB,respuesta);
    }
}

//---------------------------------------------------------------------------------------------------------------------------------------------

//          -MULTIPLICACION-

int calculoMultiplicar(int operandoA,int operandoB)
{
    int respuesta;
    respuesta=operandoA*operandoB;
    return respuesta;
}

void mostrarMultiplicacion(char mensaje[],int operandoA,int operandoB,int respuesta)
{
    printf("%s %d*%d es: %d\n",mensaje,operandoA,operandoB,respuesta);
}

//---------------------------------------------------------------------------------------------------------------------------------------------

//                -FACTORIAR-

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

void mostrarFactorial(char mensaje[],char errorMenorCero[],char errorAlPasarse[],int operando,int respuesta)
{
    if(operando < 0)
    {
      printf("%s",errorMenorCero);
    }else if(operando>13)
        {
          printf("%s",errorAlPasarse);
        }else{
            printf("%s %d! es: %d\n",mensaje,operando,respuesta);
        }
}

