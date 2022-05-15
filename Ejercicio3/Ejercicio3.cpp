// Ejercicio3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
	int i,suma = 0; //inicializo la variable suma

	/*realizo un ciclo for que va del 2 al 10000
	incluidos, dando saltos de a dos, por lo tanto i siempre
	es un numero par*/
	for (i = 2;i <= 1000;i += 2) {
		suma += i; //al valor suma le suma el valor de i
	}
	cout << "suma primeros 10000 numeros pares: " << suma << endl; //mostrar en consola el valor de suma

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
