// Ejercicio_14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int id, peso, puerto, pesoT=0, idPesado, pesoPesado=0, cant1=0, cant2=0, cant3=0, i;

	for (i = 0; i < 5; i++)
	{
		cout << "Ingrese el identificador del contenedor: ";
		cin >> id;
		cout << "Ingrese el peso del contenedor: ";
		cin >> peso;
		cout << "Ingrese el puerto de arribo: ";
		cin >> puerto;
		cout << endl;

		pesoT += peso;
		if (peso > pesoPesado) {
			pesoPesado = peso;
			idPesado = id;
		}
		if (puerto == 1) cant1++;
		if (puerto == 2) cant2++;
		if (puerto == 3) cant3++;
	}

	cout << "Peso total: " << pesoT << endl;
	cout << "Identificacion contenedor mas pesado: " << idPesado << endl;
	cout << "Cantidad contenedores puerto 1: " << cant1 << endl;
	cout << "Cantidad contenedores puerto 2: " << cant2 << endl;
	cout << "Cantidad contenedores puerto 3: " << cant3 << endl;

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
