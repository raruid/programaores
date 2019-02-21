/* Programa que te ordena alumnos por edad */

#include <iostream>

using namespace std;

int main(){
  const int VALUE = 10;
  persona alumno[VALUE];
  int util_alumnos = 5;

  imput(alumno, util_alumnos);
  algoritmoSeleccionBinaria_P(VALUE, alumno, util_alumnos);
  imprimealumnos(alumno, util_alumnos);

  cout << "Ya se ha acabao el programa chavalin, vete a tu casa" << endl;
}
