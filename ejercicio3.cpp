/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 9/09/2023

Fecha última modificación: 09/09/2023
*/

#include <iostream>
using namespace std;

string nProducto, nUsuario; // Variables.
int precio, garantia;

string guardarInfo(void)
{
  cout << "Nombre producto: "; // Ingreso de datos.
  getline(cin, nProducto); //Se obtiene todo el string ingresado, incluyendo el espacio.
  cout << "Precio: ";
  cin >> precio;
  cin.ignore(); //Se borra búfer para evitar errores de lectura.
  cout << "Garantia(años): ";
  cin >> garantia;
  cin.ignore();
  cout << "Nombre usuario: ";
  getline(cin, nUsuario);
  return nProducto; precio; garantia; nUsuario;
}

int main()
{
  guardarInfo();
  cout << nUsuario << " adquirio " << nProducto << " por el precio de " << precio << ", con garantia de " << garantia << " años.\n";
  // Impresión de dichos datos
}
