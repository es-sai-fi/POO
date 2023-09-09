/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 9/09/2023

Fecha última modificación: 09/09/2023
*/

#include <iostream>
#include <stack>
using namespace std;

void apilarDesapilar(stack<int> pila) //Apila y desapila los datos, imprime si lo anterior fue realizado además del tamaño de la pila.
{
  cout << "Tamaño pila: 0\n";
  pila.push(1);
  cout << "El numero: " + to_string(pila.top()) + " se apilo\n"; //Concatena el mensaje con el número en el tope de la fila.
  if (pila.top() % 2 == 0) //Uso del operador modulo para revisar el residuo del tope de la fila.
  {
    pila.pop(); //De ser par el número del tope de la fila, se borra dicho número.
    cout << "El numero se desapilo\n";
  }
  else
  {
    cout << "El numero NO se desapilo\n";
  }
  cout << "Tamaño pila: " + to_string(pila.size()) + "\n"; //Se imprime el tamaño de la pila concatenado al mensaje.

  pila.push(22);
  cout << "\nEl numero: " + to_string(pila.top()) + " se apilo\n";
  if (pila.top() % 2 == 0)
  {
    pila.pop();
    cout << "El numero se desapilo\n";
  }
  else
  {
    cout << "El numero NO se desapilo";
  }
  cout << "Tamaño pila: " + to_string(pila.size()) + "\n";
  

  pila.push(3);
  cout << "\nEl numero: " + to_string(pila.top()) + " se apilo\n";
  if (pila.top() % 2 == 0)
  {
    pila.pop();
    cout << "El numero se desapilo\n";
  }
  else
  {
    cout << "El numero NO se desapilo\n";
  }
  cout << "Tamaño pila: " + to_string(pila.size()) + "\n";

  pila.push(5);
  cout << "\nEl numero: " + to_string(pila.top()) + " se apilo\n";
  if (pila.top() % 2 == 0)
  {
    pila.pop();
    cout << "El numero se desapilo\n";
  }
  else
  {
    cout << "El numero NO se desapilo\n";
  }
  cout << "Tamaño pila: " + to_string(pila.size()) + "\n";
}

int main()
{
  stack<int> pila; //Se declara la pila.
  apilarDesapilar(pila); //Se invoca la función.
  cout << endl;
}