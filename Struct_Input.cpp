#include <iostream>
using namespace std;

struct persona //Struct para cada persona
{
	char nombre[20];
	int edad;
};

int input (int vector_personas[], int util_vector){

	int c = 1;

	for (int i = 0; i < util_vector; i++)
	{
		cout << "Introduce el nombre para la posición [" << c << "]" << endl;
		cin >> vector_personas[i].nombre;

		cout << "Introduce la edad para la posición [" << c << "]" << endl;
		cin >> vector_personas[i].edad;
		c++;
	}

	cout << "Datos obtenidos correctamente, ordenando datos."
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << sleep(1000)"." sleep(1000)"." << endl;
		}
	}
}