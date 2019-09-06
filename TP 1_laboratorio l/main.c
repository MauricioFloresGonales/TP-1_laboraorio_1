#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "calculos.h"
#include "funcionesAux.h"

int main()
{
//  DATOS:
    int datoA;
    int datoB;
//  BANDERAS:
    int funcionamiento=0;
    int estadoA=0;
    int estadoB=0;
//  CUENTAS:
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factoreoA;
    int factoreoB;
//VALIDADORES:
    int validadorDeIngreso;
    int validadorA;
    int validadorB;

    char opcion;
    do
    {
        if(estadoA == 0)
        {
            printf("1. Ingresar 1er operando (A=x)\n");

        }else{
            printf("1. Ingresar 1er operando (A=%d)\n",datoA);
        }

        if(estadoB == 0)
        {
            printf("2. Ingresar 2do operando (B=y)\n");

        }else{
            printf("2. Ingresar 2do operando (B=%d)\n",datoB);
        }

        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. SALIR\n");
        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
            case '1':
                if(estadoA == 0)
                {
                    datoA=ingresarNumero(datoA);
                    validadorA= datoA;
                    estadoA=1;

                }else{

                    datoA = ingresarNumero(datoA);
                    estadoA=1;
                    if(datoA != validadorA)
                    {
                        validadorA = datoB;
                        funcionamiento=0;
                    }
                }

                break;
            case '2':

                if(estadoB == 0)
                {
                    datoB=ingresarNumero(datoB);
                    validadorB= datoB;
                    estadoB=1;

                }else{

                    datoB = ingresarNumero(datoB);
                    estadoB=1;
                    if(datoB != validadorB)
                    {
                        validadorB=datoB;
                        funcionamiento=0;
                    }
                }

                break;
            case '3':

                validadorDeIngreso = validarDatos(estadoA,estadoB);

                if(validadorDeIngreso == 1)
                {
                    funcionamiento = mostrarCaluculos(datoA,datoB);

//                           SUMA
                    suma = calculoSumar(datoA,datoB);
//                           RESTA
                    resta = calculoRestar(datoA,datoB);
//                          DIVISION
                    division = calculoDividir(datoA,datoB);
//                        MULTIPLICACION
                    multiplicacion = calculoMultiplicar(datoA,datoB);
//                        FACTORIZACION
                    if(datoA >= 0)
                    {
                        factoreoA = calcularFactorial(datoA);
                    }

                    if(datoB >= 0)
                    {
                        factoreoB = calcularFactorial(datoB);
                    }
                }

                break;
            case '4':

                validadorDeIngreso = validarDatos(estadoA,estadoB);

                if(validadorDeIngreso == 1)
                {
                    funcionamiento = mostrarRespuestas(datoA,datoB ,suma ,resta ,division ,multiplicacion ,factoreoA ,factoreoB ,funcionamiento);
                }

                break;
            case '5':

                printf("ADIOS!!\n");

                break;
            default:

                printf("OPCION INCORRECTA!!!\n");
        }
    system("pause");
    system("cls");
    }
    while(opcion!='5');

    return 0;
}





