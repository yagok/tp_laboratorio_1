#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float numero1,numero2;
    char seguir='s';
    int opcion=0;
    float suma,resta,multiplicacion,division,factoriales;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=y)\n");
        printf("2- Ingresar 2do operando (B=x)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:
                   printf("Ingrese un numero: ");
                   scanf("%f", &numero1);
                break;
            case 2:
                   printf("Ingrese un numero: ");
                   scanf("%f", &numero2);
                break;
            case 3:
                   suma=sumar(numero1,numero2);
                   printf("El resultado de la suma es: %.2f\n",suma);
                break;
            case 4:
                   resta= restar(numero1, numero2);
                   printf("El resultado de la resta es: %.2f\n",resta);
                break;
            case 5:
                   division=dividir(numero1, numero2);
                    printf("El resultado de la divisoion es: %.2f\n", division);
                break;
            case 6:
                   multiplicacion= multiplicar(numero1, numero2);
                   printf("El resultado de la multiplicacion es: %.2f\n", multiplicacion);
                break;
            case 7:
                   factoriales= factorial(numero1);
                   printf("El resultado del factorial es: %.2f\n", factoriales);
                break;
            case 8:
                   suma=sumar(numero1,numero2);
                   printf("El resultado de la suma es: %.2f\n",suma);

                   resta= restar(numero1, numero2);
                   printf("El resultado de la resta es: %.2f\n",resta);

                   division=dividir(numero1, numero2);
                   printf("El resultado de la divisoion es: %.2f\n", division);

                   multiplicacion= multiplicar(numero1, numero2);
                   printf("El resultado de la multiplicacion es: %.2f\n", multiplicacion);

                   factoriales= factorial(numero1);
                   printf("El resultado del factorial es: %.2f\n", factoriales);

                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    system("pause");

    return 0;
}
