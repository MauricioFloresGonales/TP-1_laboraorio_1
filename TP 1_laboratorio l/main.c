#include <stdio.h>
#include <stdlib.h>

int ingresarNumero(int);
void calcularOperaciones(int,int);
void mostrarCaluculos(int,int);
int calculoSumar(int, int);
int calculoRestar(int, int);
float calculoDivisidir(int,int);
int calculoMultiplicar(int,int);

int main()
{
    int datoA;
    int datoB;
    int flagX=0;
    int flagY=0;


    char opcion;
    do
    {
        if(flagX == 0)
        {
            printf("1. Ingresar 1er operando (A=x)\n");

        }else{
            printf("1. Ingresar 1er operando (A=%d)\n",datoA);
            }

        if(flagY == 0)
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
                flagX=1;

                break;
            case '2':
                datoB=ingresarNumero(datoB);
                flagY=1;

                break;
            case '3':
                mostrarCaluculos(datoA,datoB);
                calcularOperaciones(datoA,datoB);
                break;
            case '4':
                printf("Estoy mostrando!!!\n");
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

int ingresarNumero(int numeroIngresado)
{
    int numero;
    printf("ingrese un numero: ");
    scanf("%d",&numero);
    return numero;
}

void calcularOperaciones(int operandoA,int operandoB)
{
    int suma;
    int resta;
    int division;
    int multiplicacion;

    suma = calculoSumar(operandoA,operandoB);
    resta = calculoRestar(operandoA,operandoB);
    division = calculoDivisidir(operandoA,operandoB);
    multiplicacion = calculoMultiplicar(operandoA,operandoB);

}

void mostrarCaluculos(int operandoA,int operandoB)
{
    printf("a) Calcular la suma (%d+%d)\nb) Calcular la resta (%d-%d)\nc) Calcular la division (%d/%d)\nd) Calcular la multiplicacion (%d*%d)\ne) Calcular el factorial (%d!)\n",operandoA,operandoB,operandoA,operandoB,operandoA,operandoB,operandoA,operandoB,operandoA);
}

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

