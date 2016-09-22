#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funcion.h"

void inicializarArrayPersonas(EPersona lista[ ], int cantidadDeElementos, int valor)
{
    int i;

    for(i=0; i<cantidadDeElementos; i++)
    {
        lista[i].estado = valor;
    }

}

int buscarPrimerLugarLibre(EPersona lista[ ], int cantidadDeElementos, int valor)
{
    int i;

    for(i=0;i < cantidadDeElementos; i++)
    {
        if(lista[i].estado == valor)
        {
            return i;
        }

    }

    return -1;
}

void AltaPersona(EPersona lista[ ], int CantidadDeElementos)
{
    int lugarLibre;

    lugarLibre = buscarPrimerLugarLibre(lista, CantidadDeElementos, 0);

    if(lugarLibre == -1)
    {
        printf("\n\nYA NO QUEDAN LUGARES LIBRES\n\n");
    }

    else
    {

    printf("\n\nIngrese el nombre de la persona: ");
    fflush(stdin);
    gets(lista[lugarLibre].nombre);

    printf("\n\nIngrese edad de la persona: ");
    scanf("%d",&lista[lugarLibre].edad);

    printf("\n\nIngrese DNI de la persona: ");
    scanf("%d",&lista[lugarLibre].dni);

    lista[lugarLibre].estado = 1;

    }

}


int buscarPorDni(EPersona lista[], int CantidadDeElementos,  int dni)
{
    int i;

    for(i=0; i<CantidadDeElementos; i++)
    {
         if(lista[i].dni == dni)
        {
            return i;
        }

    }

    return -1;
}


void BorrarPersona(EPersona lista[ ], int CantidadDeElementos)
{
    int posicion;
    int documento;

    printf("\n\nIngrese el dni de la persona que quiere dar de baja: ");
    scanf("%d",&documento);

    posicion = buscarPorDni(lista, CantidadDeElementos,  documento);

    if(posicion == -1)
    {
        printf("\n\nNO HAY NINGUNA PERSONA CON ESE DNI\n\n");
    }

    else
    {
        lista[posicion].estado = 0;

        printf("\n\nOPERACION REALIZADA CON EXITO\n\n");
    }

}


void Ordenamiento(EPersona lista[ ], int CantidadDeElementos)
{
    int i;
    int  j;
    EPersona AuxPersona;


    for(i=0; i<CantidadDeElementos - 1; i++)
    {

        if(lista[i].estado == 0)
        {
            continue;
        }

        for( j=i+1; j<CantidadDeElementos; j++)
        {
            if(lista[j].estado == 0)
            {
                continue;
            }

            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
            {
                AuxPersona = lista[j];
                lista[j] = lista[i];
                lista[i] = AuxPersona;
            }

        }

    }

    for(i=0; i<CantidadDeElementos; i++)
    {
        printf("\n\nNombre: %s",lista[i].nombre);
        printf("\nEdad: %d",lista[i].edad);
        printf("\nDni: %d\n\n",lista[i].dni);
    }

}

void MostrarGrafico(EPersona lista[ ], int CantidadDeElementos)
{

    int i;
    int hasta18 =  0;
    int de19a35 = 0;
    int mayorDe35 = 0;
    int flag=0;
    int mayor;

    for(i=0; i<CantidadDeElementos; i++)
    {

        if(lista[i].estado == 0)
            {
                continue;
            }


        if(lista[i].edad<=18)
        {
            hasta18 ++;
        }

        else

        if(lista[i].edad >= 19 && lista[i].edad<= 35)
        {
            de19a35 ++;
        }

        else

        if(lista[i].edad>35)
        {
            mayorDe35++;
        }

    }

        if(hasta18 >= de19a35 && hasta18 >= mayorDe35)
        {
            mayor = hasta18;
        }

       else

           if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
           {
               mayor = de19a35;
           }

           else
           {
               mayor = mayorDe35;
           }

        for(i = mayor; i > 0; i--)
        {
              if(i<= hasta18)
            {
                printf("*");
            }
              if(i<= de19a35)
            {
                flag=1;
                printf("\t*");
            }
                  if(i<= mayorDe35)
            {
                if(flag==0)
                    printf("\t\t*");
                if(flag==1)
                    printf("\t*");
            }
                    printf("\n");
        }

    printf("\n\n");

    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);

    printf("\n\n");

   }





