#include <stdio.h>
#include <stdlib.h>

void suma(float num1, float num2, int cont)
{
    float resultado;

    if(cont != 2)
    {
        printf("\n\nLA SUMA NO SE PUEDE REALIZAR CON UN SOLO OPERANDO\n\n");
    }

    else
    {

    resultado = num1 + num2;

    printf("\n\nsuma = %.2f", resultado);

    }

}

void resta(float num1, float num2, int cont)
{
    float resultado;

    if(cont != 2)
    {
        printf("\n\nLA RESTA NO SE PUEDE REALIZAR CON UN SOLO OPERANDO\n\n");
    }

    else
    {

    resultado = num1 - num2;

    printf("\n\nresta = %.2f", resultado);

    }

}

void division(float num1, float num2, int cont)
{
    float resultado;

    if(cont != 2)
    {
        printf("\n\nLA DIVISION NO SE PUEDE REALIZAR  CON UN SOLO OPERANDO\n\n");
    }

    else
    {

    if(num2 == 0)
    {
        printf("\n\nERROR, EL SEGUNDO OPERANDO NO PUEDE SER 0\n\n");
    }

    else
    {

    resultado = num1 / num2;

    printf("\n\ndivision = %.2f", resultado);

    }


     }

}

void multiplicacion(float num1, float num2, int cont)
{
    float resultado;

    if(cont != 2)
    {
        printf("\n\nLA MULTIPLICACION NO SE PUEDE REALIZAR CON UN SOLO OPERANDO\n\n");
    }

    else
    {

    resultado = num1 * num2;

    printf("\n\nmultiplicacion = %.2f", resultado);

    }

}

void factorial(float num1)
{
    int i;
    float factor = 1;

    for(i=1; i<=num1; i++)
    {
        factor = factor * i;
    }

    printf("\n\nfactorial = %.2f",factor);

}
