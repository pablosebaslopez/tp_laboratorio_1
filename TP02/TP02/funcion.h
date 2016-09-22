#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Inicializa el estado de cada array en cero
 * @param lista el array se pasa como parametro.
  * @param CantidadDeElementos es la cantidad de posiciones en el array
  * @param Es el valor que se toma para indicar lugares libres
 * @return Void - no retorna nada
 */

void inicializarArrayPersonas(EPersona lista[ ], int cantidadDeElementos, int valor);

/**
 * Da de alta a una persona
 * @param lista el array se pasa como parametro.
  * @param CantidadDeElementos es la cantidad de posiciones en el array
 * @return Void - no retorna nada
 */

void AltaPersona(EPersona lista[ ], int CantidadDeElementos);


/**
 *Borra a una persona del listado
 * @param lista el array se pasa como parametro.
  * @param CantidadDeElementos es la cantidad de posiciones en el array
 * @return Void - no retorna nada
 */

void BorrarPersona(EPersona lista[ ], int CantidadDeElementos);

/**
 * Ordena el listado por medio de los nombres
 * @param lista el array se pasa como parametro.
  * @param CantidadDeElementos es la cantidad de posiciones en el array
 * @return Void - no retorna nada
 */
void Ordenamiento(EPersona lista[ ], int CantidadDeElementos);


/**
 * Muestra un grafico en base a las distintas edades
 * @param lista el array se pasa como parametro.
  * @param CantidadDeElementos es la cantidad de posiciones en el array
 * @return Void - no retorna nada
 */
void MostrarGrafico(EPersona lista[ ], int CantidadDeElementos);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
  * @param CantidadDeElementos es la cantidad de posiciones en el array
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int CantidadDeElementos,  int dni);


#endif // FUNCIONES_H_INCLUDED
