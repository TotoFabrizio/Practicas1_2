// ejercicio_12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int fecha, fechaMayor=-1, fechaMenor=-1;
	char nombre[30 + 1], nombreMayor[30+1], nombreMenor[30+1];

	cout << "Ingrese el nombre: ";
	cin >> nombre;
	
	while (strcmp(nombre,"FIN")!=0){
		cout << "Ingrese la fecha de nacimiento (AAAAMMDD): ";
		cin >> fecha;
		if (fechaMenor == -1 || fecha>fechaMenor){ //Asumi que si dos fechas de nacimiento son iguales se queda con la primera persona que fue ingresada
			fechaMenor = fecha;
			strcpy_s(nombreMenor, nombre);
		}
		if (fechaMayor == -1 || fecha<fechaMayor){ //Asumi que si dos fechas de nacimiento son iguales se queda con la primera persona que fue ingresada
			fechaMayor = fecha;
			strcpy_s(nombreMayor, nombre);
		}
		cout << "Ingrese el nombre: ";
		cin >> nombre;
	}
	cout << "nombre del menor: " << nombreMenor << ", fecha nacimiento: " << fechaMenor << endl;
	cout << "nombre del mayor: " << nombreMayor << ", fecha nacimiento: " << fechaMayor << endl;

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
