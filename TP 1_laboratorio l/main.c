#include <stdio.h>
#include <stdlib.h>

int pedirNumero(int);


int main()
{
    int datoA;
    int datoB;


    char opcion;
    do
    {
        printf("1. Ingresar 1er operando (A=x)\n");
        printf("2. Ingresar 2do operando (B=y)\n");
        printf("3. Calcular todas las operaciones\na) Calcular la suma (A+B)b) Calcular la resta (A-B)c) Calcular la division (A/B)d) Calcular la multiplicacion (A*B)e) Calcular el factorial (A!)");
        printf("4. Informar resultados\n");
        printf("5. SALIR\n");
        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);
        switch(opcion)
        {
            case '1':

                ingresarNumero(datoA);
                break;
            case '2':
                ingresarNumero(datoB);
                break;
            case '3':
                printf("Estoy modificando!!!\n");
                break;
            case '4':
                printf("Estoy mostrando!!!\n");
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

