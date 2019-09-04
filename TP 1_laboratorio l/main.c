#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "calculos.h"


int main()
{
    int datoA;
    int datoB;
    int funcinamiento=0;
    int estadoA=0;
    int estadoB=0;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factoreoA;
    int factoreoB;


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

                datoA=ingresarNumero(datoA);
                estadoA=1;

                break;
            case '2':

                datoB=ingresarNumero(datoB);
                estadoB=1;

                break;
            case '3':

                if(validarDatos(estadoA,estadoB)== 1)
                {
                    funcinamiento = mostrarCaluculos(datoA,datoB,estadoA,estadoB);

                    suma = calculoSumar(datoA,datoB);

                    resta = calculoRestar(datoA,datoB);

                    division = calculoDividir(datoA,datoB);

                    multiplicacion = calculoMultiplicar(datoA,datoB);

                    factoreoA = calcularFactorial(datoA);

                    factoreoB = calcularFactorial(datoB);
                }



                break;
            case '4':
                if(validarDatos(estadoA,estadoB)== 1)
                {
                    funcinamiento = mostrarRespuestas(datoA,datoB,funcinamiento);
                }


                break;
            case '5':
                printf("ADIOS!!\n");
                break;
            default:

                printf("Opcion incorrecta!!!\n");
        }
    system("pause");
    system("cls");
    }
    while(opcion!='5');

    return 0;
}





