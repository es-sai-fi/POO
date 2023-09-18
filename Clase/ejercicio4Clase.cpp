#include <iostream>
#include <vector>
using namespace std;

/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 05/09/2023

Fecha última modificación: 09/09/23
*/

float nPractica, nTeorica, nParticipacion, nPonderada, nCurso; //Variables.
int cEstudiantes;

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
float calcularNotaCurso(vector<float>nPonderadas){ //Recibe como argumento un vector y recorre cada elemento del vector para sacar su promedio.
  for (int k=0; k<nPonderadas.size(); k++){
    nCurso += nPonderadas[k];
  }
  nCurso = nCurso/nPonderadas.size();
  return nCurso;
}
int main(){
  cout << "Ingrese la cantidad de estudiantes: ";
  cin >> cEstudiantes;
 vector <float> nPonderadas(cEstudiantes); //Ciclo for que se ejecuta tantas veces como estudiantes haya para tomar sus datos y almacenarlos.
  for(int i=0; i<cEstudiantes; i++){
    cout << "Digite la nota de practica del estudiante " << i+1 << ": ";
    cin >> nPractica;
    nPractica = comprobarNota(nPractica);
    cout << "Digite la nota teorica del estudiante " << i+1 << ": ";
    cin >> nTeorica;   
    nTeorica = comprobarNota(nTeorica);
    cout << "Digite la nota de participacion del estudiante " << i+1 << ": ";
    cin >> nParticipacion;
    nParticipacion = comprobarNota(nParticipacion);
    nPonderadas[i] = calcularNota(nPractica, nTeorica, nParticipacion);
  }
  cout << "Las notas finales son: \n";
  for(int j=0; j<nPonderadas.size(); j++){ //Ciclo for que imprime cada nota guardada y al final el promedio del curso.
    cout << "La nota final del estudiante " << j+1 << " es: " << nPonderadas[j] << "\n"; 
  }
  cout << "El promedio del curso es: " << calcularNotaCurso(nPonderadas) << "\n";
}