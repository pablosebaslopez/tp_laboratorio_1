#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

#define TAM 20


void inicializarArrayPersonas(EPersona lista[ ], int cantidadDeElementos, int valor);


int main()
{
    EPersona lista[TAM];

    int CantPer = 0;
    char seguir='s';
    int opcion=0;


    inicializarArrayPersonas(lista, TAM, 0);

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);

        while(opcion < 0 || opcion > 5)
     {
         printf("\nLA OPCION ELEGIDA ES INCORRECTA, REINGRESE\n\n");
         scanf("%d",&opcion);
     }

        switch(opcion)
        {
            case 1:

           AltaPersona(lista, TAM);

                break;

            case 2:

            BorrarPersona(lista, TAM);

                break;

            case 3:

            Ordenamiento(lista, TAM);

                break;

            case 4:

            MostrarGrafico(lista, TAM);

                break;

            case 5:

                seguir = 'n';

                break;
        }

    }

    return 0;
}
