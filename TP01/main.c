#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;

    float numero1;
    float numero2;

    int contador = 0;

    while(seguir=='s')
    {
        printf("\n\n1- Ingresar 1er operando (A=%.2f)\n",numero1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("3- Calcular la suma (%.2f+%.2f)\n",numero1, numero2);
        printf("4- Calcular la resta (%.2f-%.2f)\n",numero1, numero2);
        printf("5- Calcular la division (%.2f/%.2f)\n",numero1, numero2);
        printf("6- Calcular la multiplicacion (%.2f*%.2f)\n", numero1, numero2);
        printf("7- Calcular el factorial (%.2f!)\n", numero1);
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

            printf("\n\ningrese numero:  ");
            scanf("%f",&numero1);

            contador = 1;

                break;

            case 2:

            printf("\n\ningrese numero:  ");
            scanf("%f",&numero2);

            contador = 2;

                break;

            case 3:

            suma(numero1, numero2, contador);

                break;

            case 4:

            resta(numero1, numero2, contador);

                break;

            case 5:

            division(numero1, numero2, contador);

                break;

            case 6:

            multiplicacion(numero1, numero2, contador);

                break;

            case 7:

            factorial(numero1);

                break;

            case 8:

            suma(numero1, numero2, contador);
            resta(numero1, numero2, contador);
            division(numero1, numero2, contador);
            multiplicacion(numero1, numero2, contador);
            factorial(numero1);

                break;

            case 9:

                seguir = 'n';

                break;

        }

}

  return 0;

}
