/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 17/09/2023

Fecha última modificación: 17/09/23
*/
#include <iostream> // Se incluye iostream al programa.
#include "camion.h" // Se llama a la historia del programa.
using namespace std;

Camion::Camion(string laPlaca, int laCapacidadMaxima) /**Implementación del constructor, en este caso la clase camión y sus objetos tienen 3 atributos.*/
{
  pl = laPlaca; // Placa del camión.
  cm = laCapacidadMaxima; // Carga máxima del camión.
  ptc = 0; // Peso actual del camión.
}

bool Camion::cargarUnObjeto(int pesoDelObjeto) /** Se define el método para cargar un objeto, si el objeto + el peso actual del camión (ptc) son menores a la carga máxima (cm), entonces se carga el objeto y se retorna true, si lo anterior no se cumple no se carga y retorna false.*/
{
  if (ptc + pesoDelObjeto <= cm)
  {
    ptc = ptc + pesoDelObjeto; // Se "carga" el objeto al camión.
    return true;
  }
  else
    return false;
}
int Camion::hacerMudanza() /**Retorna la carga actual o en este caso la carga que se transportó al hacer la mudanza al camión al que se le invoca el método.*/
{
  return ptc;
}
string Camion::cualEsLaPlaca() // Retorna la placa del camión al que se le invoca el método.
{
  return pl;
}