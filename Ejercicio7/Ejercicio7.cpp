// Ejercicio7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int t, v, vMasRapido = 0;
	char nombreMasRapido[30 + 1];
	char nombre[30 + 1];
	cout << "Ingrese el tiempo del corredor en segundos: ";
	cin >> t;
	while (t!=0) {//Decidi que t igual a 0 es la condicon de salida del while
		cout << "Ingrese el nombre del corredor: ";
		cin >> nombre;
		v = 1500 / t;
		if (v > vMasRapido) {
			vMasRapido = v;
			strcpy_s(nombreMasRapido, nombre);
		}
		cout << "Ingrese el tiempo del corredor en segundos: ";
		cin >> t;
	}
	cout << "El corredor mas rapido es " << nombreMasRapido << " con una velocidad de " << vMasRapido << " m/s\n"; //se muestra el nombre y la velocidad del corredor mas rapido
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
