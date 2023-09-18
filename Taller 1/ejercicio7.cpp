#include <iostream>
using namespace std;

string calificacion;

string conseguirCalificacion(string calificacion) //Evalua la letra registrada y devuelve un mensaje.
{
  string resultado;

  if (calificacion == "a")
  {
    resultado = "aceptable";
  }
  else if (calificacion == "b")
  {
    resultado = "buena";
  }
  else if (calificacion == "e")
  {
    resultado = "excelente";
  }
  else
  {
    resultado = "?";
  }

  return resultado;
}

int main()
{
  cin >> calificacion; //Entrada de la letra.
  cout << conseguirCalificacion(calificacion); //Invoca la funcion para conseguir la calificación.
  cout << endl;
}