
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <set>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino
bool existeCamino(int grafo[5][5], int inicio, int destino)
{


    if(grafo[destino][inicio] != infinito)//*Con el if verificamos si hay caminos en el grafo si hay infinitos o no hay retornamos false
        return false;

    return true;



    }

//Ej. si la profundidad es igual a 0 solo se devuelve el nodo inicial
//Ej. si la profundidad es igual a 1 se devuelve el nodo inicial y sus adjacentes
//Ej. si la profundidad es igual a 2 se devuelve el nodo inicial, sus adjacentes y los adjacentes de los adjacentes


set<int> obtenerAdjacentes(int grafo[5][5], int inicio, int profundidad)
{
    set<int> respuesta;


respuesta.insert(inicio);//Insertamos el inicion en el grafo

    if(profundidad<=0)//Si la profundidad es cero retornamos el nodo inicial
        return respuesta;

         for(int i=0; i<5; i++)//Con el ciclo recooremos el grafo y verificamos si es abjacente y que el grafo inicio no sea igual a 0 ni infinito
            if(grafo[inicio][i] > 0 && grafo[inicio][i] < infinito)
                respuesta.insert(i);


    if (profundidad == 1)// Si la profundidad es igual a 1 retornamos el nodo inicial y sus adjacentes
            return respuesta;

          for(int i=0; i<5; i++)
      if(grafo[inicio][i] > 0 && grafo[inicio][i] < infinito)
              for(int j=0; j<5; j++)
                    if(grafo[i][j] > 0 && grafo[i][j] < infinito)
                        respuesta.insert(j);
}

int main ()
{

    evaluar();

    return 1;
}
