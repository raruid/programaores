/* Programa que te ordena alumnos por edad */

#include <iostream>

using namespace std;

void algoritmoSeleccionBinaria_P(persona v[], int util_v);

int main(){
  const int VALUE = 10;
  persona alumno[VALUE];
  int util_alumnos = 5;

  imput(alumno, util_alumnos);
  algoritmoSeleccionBinaria_P(VALUE, alumno, util_alumnos);
  imprimealumnos(alumno, util_alumnos);

  cout << "Ya se ha acabao el programa chavalin, vete a tu casa" << endl;
}

void algoritmoSeleccionBinaria_P(persona v[], int util_v){

	int pos_min = 0;
	int pos_max = 0;
	persona aux;

	for (int i = 0, i_contraria = util_v - 1; i<=i_contraria-1; i++, i_contraria--){

		pos_min = i;
		pos_max = i;
		for (int j=i+1; j<=i_contraria; j++){

			if(v[j].edad < v[pos_min].edad){
				pos_min = j;
			}
			if(v[j].edad > v[pos_max].edad){
				pos_max = j;
			}
		}

	/*CAMBIO DE VARIABLES*/
		if (i != pos_max){
			aux = v[i];
			v[i] = v[pos_min];
			v[pos_min] = aux;

			aux = v[i_contraria];
			v[i_contraria] = v[pos_max];
			v[pos_max] = aux;
		}else if (i_contraria != pos_min){
			aux = v[i_contraria];
			v[i_contraria] = v[pos_max];
			v[pos_max] = aux;

			aux = v[i];
			v[i] = v[pos_min];
			v[pos_min] = aux;
		}else{
			aux = v[i_contraria];
			v[i_contraria] = v[pos_max];
			v[pos_max] = aux;
		}
	}
}
