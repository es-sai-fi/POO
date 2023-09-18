/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 9/09/2023

Fecha última modificación: 09/09/2023
*/

#include <iostream>
using namespace std;

int numero1, numero2;

string mayorIgual(int numero1, int numero2) //Recibe dos enteros y evalua cual es mayor y si son iguales.
{
  string resultado;
  if (numero1 > numero2){
    resultado = "El numero mayor es: " + to_string(numero1) + "\n";
  }
  if (numero1 < numero2){
    resultado = "El numero mayor es: " + to_string(numero2) + "\n";
  }
  if (numero1 == numero2){
    resultado = "Los numeros son iguales\n";
  }
  return resultado;
}


int main()
{
  cout << "Digite el primer numero: "; //Ingreso de datos.
  cin >> numero1;
  cout << "Digite el segundo numero: ";
  cin >> numero2;
  cout << mayorIgual(numero1, numero2); //Impresión del resultado de la función mayorIgual.
  cout << endl;
}