/* Programa que te ordena alumnos por edad */

#include <iostream>

using namespace std;

int imprimealumnos(const int alumno[], int util_alum);

int main(){
  const int VALUE = 10;
  persona alumno[VALUE];
  int util_alumnos = 5;

  imput(alumno, util_alumnos);
  algoritmoSeleccionBinaria_P(VALUE, alumno, util_alumnos);
  imprimealumnos(alumno, util_alumnos);

  cout << "Ya se ha acabao el programa chavalin, vete a tu casa" << endl;
}

int imprimealumnos(const int &alumno[], int util_alum){

  cout << "Te he ordenado los alumnos de mas tonto a mas listo: "
  for (int i = 0; i < util_alum; i++){
    cout << alumno[i].nombre << endl;
  }
}
