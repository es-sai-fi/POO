/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 17/09/2023

Fecha última modificación: 17/09/23
*/
#include <iostream> // Se incluye iostream al programa.
#include "camion.h" // Se llama a la historia del programa.
using namespace std;

int main()
{
  Camion unCamion("ABC-001", 10000); // Llamado al método del constructor.
  Camion otroCamion("DEF-002", 5000);
  int objetos[8] = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30}; // Matriz que contiene los objetos a transportar.
  for(int cualObjeto = 0; cualObjeto < 8; cualObjeto++) /** Ciclo que en cada camión carga el objeto a transportar.*/
  {
    int objetoATransportar = objetos[cualObjeto];
    if(not unCamion.cargarUnObjeto(objetoATransportar)){ // Se carga el objeto al camión y se evalua el valor de verdad que retorna.
      if(not otroCamion.cargarUnObjeto(objetoATransportar)){ // Si ambos valores de verdad son False entonces se imprime el mensaje de abajo.
        cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
      }
    }
  }
  cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.hacerMudanza() << " kg." << endl;  // Se imprime la placa y lo que se transportó.
  cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.hacerMudanza() << " kg." << endl;

  return 0;
}