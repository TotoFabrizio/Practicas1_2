// Ejercicio9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int tipoIn, valorMulta, i, multaL = 0, multaM = 0, multaG = 0, infraG=0;
    char gravIn, motIn[100+1];

	for ( i = 0; i < 20; i++)
	{
		cout << "Ingrese el tipo de infraccion (1,2,3,4): ";
		cin >> tipoIn;
		cout << "Ingrese el motivo de la infraccion: ";
		cin >> motIn;
		cout << "Ingrese el valor de la multa: ";
		cin >> valorMulta;
		cout << "Ingrese la gravedad de la infraccion (L,M,G): ";
		cin >> gravIn;
		cout << endl;
		if (gravIn == 'L') multaL += valorMulta;
		if (gravIn == 'M') multaM += valorMulta;
		if (gravIn == 'G') multaG += valorMulta;
		if ((tipoIn == 3 || tipoIn == 4) && gravIn == 'G') infraG++;
	}
	cout << "Valor multa infracciones gravedad L: " << multaL << endl;
	cout << "Valor multa infracciones gravedad M: " << multaM << endl;
	cout << "Valor multa infracciones gravedad G: " << multaG << endl;
	if (infraG > 3) cout << "Clausurar fabrica" << endl;
	
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
