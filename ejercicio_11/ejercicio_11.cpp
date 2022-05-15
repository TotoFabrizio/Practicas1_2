// ejercicio_11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	float mayor, menor, posMayor=-1, posMenor=-1, num; //asumi que los valores son reales ya que no especifica el conjunto de los valores.
	int n, i;
	cout << "Ingrese la cantidad de valores a ingresar: ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "ingrese el valor: ";
		cin >> num;
		if (posMayor == -1 || mayor < num) {
			mayor = num;
			posMayor = i; // asumi que la posicion puede ir de 0 hasta n-1, por lo que la posision en el conjunto va a esta entre esos valores. Similar a un array.
		}
		if (posMenor == -1 || menor > num) {
			menor = num;
			posMenor = i; // asumi que la posicion puede ir de 0 hasta n-1, por lo que la posision en el conjunto va a esta entre esos valores. Similar a un array.
		}
	}

	cout << "El mayor valor ingresado es: " << mayor << " fue ingresado en la posicion: " << posMayor << endl;
	cout << "El menor valor ingresado es: " << menor << " fue ingresado en la posicion: " << posMenor << endl;

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
