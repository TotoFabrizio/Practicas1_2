// Ejercicio_18.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

string Tendencia(int a, int b) {
    if (b - a < 0) return "Decreciente";
    if (b - a < 0.02 * a) return "Estable";
    if (b - a < 0.05 * a) return "Leve acenso";
    return "En ascenso";
}

int main()
{
    int a, b;

    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << endl;
    cout << Tendencia(a, b);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
