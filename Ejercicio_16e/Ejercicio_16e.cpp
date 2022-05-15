// Ejercicio_16e.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int cantP = 0, cant0 = 0, sumN = 0, i, num = 0, numAnt = -1, n;
	float promP = 0, sumP = 0;

	cout << "Ingrese la cantidad de numeros enteros a procesar: ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "ingrese un numero entero: ";
		cin >> num;
		if (num == 0) cant0++;
		if (num < 0) sumN += num;
		if (num > 0) {
			cantP++;
			sumP += num;
		}
		promP = sumP / cantP;
		numAnt = num;
		/*como lo que me importa es la cantidad de ceros sea mayor que 4
		lo hago al final del procesamiento de los numeros para saber si
		el numero ingresado hace cumplir los requerimientor.*/
		if (cant0 > 4|| promP > 6) break;
	}
	cout << "Cantidad de ceros: " << cant0 << endl;
	if (cantP > 0) {
		cout << "Promedio de los valores positivos: " << promP << endl;
	}
	else {
		cout << "No se pudeo calcular el promedio de los valores positivos (Division por 0)\n";
	}
	cout << "Sumatoria de los valores negarivos: " << sumN << endl;

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
