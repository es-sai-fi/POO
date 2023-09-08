#include <iostream>
using namespace std;

/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 

Fecha última modificación: 8/09/23
*/

string nombre, apellido, nit, cargo; //Variables.
int numeroEmpleados, salario;

string guardarInfo(int numeroEmpleados){ /* Función que recibe un número de empleados y guarda información de dicha cantidad de empleados */
  for(int i=0; i+1<=numeroEmpleados; i++){
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;    
    cout << "NIT: ";
    cin >> nit;    
    cout << "Cargo: ";
    cin >> cargo;    
    cout << "Salario: ";
    cin >> salario;    
  }
  return nombre; apellido; nit; cargo; salario; 
}

int main() {
  cout << "Ingrese cantidad de empleados: "; //Se pide cant de empleados.
  cin >> numeroEmpleados;
  guardarInfo(numeroEmpleados);
  cout << nombre << " " << apellido << ", identificada con el numero de identidad " << nit << ", en el puesto de " << cargo << " recibe un pago mensual de " << salario; //Se imprime la información registrada.
  
}