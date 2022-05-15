// Ejercicio10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	/*g1 cant. empleados con salario menor a 1520,
	g2 cant. empleados con salario mayor o igual a 1520 y menor a 2780
	g3 cant. empleados con salario mayor o igual a 2780 y menor a pero menos a 5999
	g4 cant. empleados con salario mayor o igual a 5999*/
	int g1 = 0, g2 = 0, g3 = 0, g4 = 0;
    float salario;

	cout << "Ingrese su salario: ";
	cin >> salario;
	while (salario!=0)
	{
		if (salario < 1520) g1++;
		if (salario >= 1520 && salario < 2780) g2++;
		if (salario >= 2780 && salario < 5999) g3++;
		if (salario >= 5999) g4++;
		cout << "Ingrese su salario: ";
		cin >> salario;
	}
	cout << "Cant empleados que ganan menos de 1520: " << g1 << endl;
	cout << "Cant empleados que ganan 1520 o mas pero menos 2780: " << g2 << endl;
	cout << "Cant empleados que ganan 2780 o mas pero menos 5999: " << g3 << endl;
	cout << "Cant empleados que ganan 5999 o mas: " << g4 << endl;

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
