#include <iostream>
using namespace std;

/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 9/09/2023

Fecha última modificación: 9/09/2023
*/

float nPractica, nTeorica, nParticipacion, nPonderada; //Variables.

float comprobarNota(float notaVerificar){ /* Función que recibe la nota digitada y comprueba si cumple con el rango */
  while(notaVerificar < 0 or notaVerificar > 5){
    cout << "Por favor digite la nota correctamente: ";
    cin >> notaVerificar;
    }
  return notaVerificar; 
}
float calcularNota(float nPractica, float nTeorica, float nParticipacion){ /* Función que recibe las notas digitadas y calcula la nota final */
  nPonderada = (nPractica*0.30) + (nTeorica*0.60) + (nParticipacion*0.10);
  return nPonderada;
}
int main(){
  cout << "Digite la nota de practica: "; /*Entran datos, son verificados, pasan a la función para calcular la nota y posteriormente son impresos*/
  cin >> nPractica;
  nPractica = comprobarNota(nPractica);
  cout << "Digite la nota teorica: ";
  cin >> nTeorica;   
  nTeorica = comprobarNota(nTeorica);
  cout << "Digite la nota de participacion: ";
  cin >> nParticipacion;
  nParticipacion = comprobarNota(nParticipacion);
  cout << "La nota final es: " << calcularNota(nPractica, nTeorica, nParticipacion ) << "\n"; 
  cout << endl;
} 