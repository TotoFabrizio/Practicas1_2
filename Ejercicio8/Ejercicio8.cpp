// Ejercicio8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int i, sumMD = 0, num; // sumMD = suma menores de -10
	float promMC, sumMC = 0, cantMC = 0; // promMC (promedio mayores a cien) sumMC (suma mayores a cien) cantMC (cantidad de mayores a cien)
	for (i = 0; i < 50; i++){
		cout << "Ingrese un numero entero: ";
		cin >> num;
		if (num > 100) {
			sumMC += num;
			cantMC++;
		}
		if (num < -10) sumMD += num;
	}
	if (cantMC != 0){
		promMC = sumMC / cantMC;
		cout << "Promedio de lo mayores que 100: " << promMC << endl;
	}
	else{
		cout << "No se puede calclar el promedio (division por cero)\n";
	}
	cout << "Suma de los menores que -10: " << sumMD << endl;

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
