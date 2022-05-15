// Ejercicio5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
	int l1,l2 ,l3; //declaro y defino los lados del triangulo

	cout << "Ingrese el valor del primer lado: ";
	cin >> l1;
	cout << "Ingrese el valor del Segundo lado: ";
	cin >> l2;
	cout << "Ingrese el valor del tercer lado: ";
	cin >> l3;

	if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2) { //comparo que la suma de dos de los lados sea mayor que el tercero
		if (l1 == l2 && l1 == l3) {
			cout << "Triangulo Equilatero\n";
		};
		if (l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l2 == l3 && l2 != l1) {
			cout << "Triangulo Isosceles\n";
		};
		if ((l1 != l2) && (l1 != l3) && (l2 != l3)) {
			cout << "Triangulo Escaleno\n";
		};
	}
	else {
		cout << "No forman triangulo\n";
	}

	


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
