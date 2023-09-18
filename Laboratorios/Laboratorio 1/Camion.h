/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 17/09/2023

Fecha última modificación: 17/09/23
*/
#include <string> // Se incluye la librería string para poder procesar operaciones con strings.
using namespace std;

class Camion
{
private: // Se definen que atributos y métodos van a ser privados.
  string pl; 
  int cm;
  int ptc;

public: // Se definen que atributos y métodos serán públicos.
  Camion(string laPlaca, int laCapacidadMaxima); // Definición del constructor.
  bool cargarUnObjeto(int pesoDelObjeto); // true = se pudo hacer; false = no se pudo.
  int hacerMudanza(); // Retorna la carga que transportó.
  string cualEsLaPlaca(); // Retorna la placa del camión.
};
