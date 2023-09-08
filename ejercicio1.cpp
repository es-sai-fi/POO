#include <iostream>
using namespace std;

/*
Autor: Jhorman Mauricio Gomez Alarcon

Correo: gomez.jhorman@correounivalle.edu.co

Fecha creación: 

Fecha última modificación: 8/09/23
*/

int tablasDeMultiplicar(int i, int j){ //Función que toma i, j y en base a ellas muestra la tabla de dicho número.
  int tablaDeMultiplicar = 0;
  tablaDeMultiplicar = i * j;
  return tablaDeMultiplicar;
}

int main(){
  cout << "1 2 3 4 5 \n"; 
  for (int i = 0; i <= 5; i++) { //Ciclo anidado, i es la tabla a sacar y j el número por el cual se multiplica.
    for (int j = 1; j <= 5; j++) {
      cout << tablasDeMultiplicar(i, j) << " ";
    }
    cout << endl;
  }
}
