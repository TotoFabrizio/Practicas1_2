// Ejercicio_15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int cantA = 0, cantE = 0, cantI = 0, cantO = 0, cantU = 0, cantP = 0, longMasLarga = 0, longitud = 0;
    char caracter, ultimoCaracter=' ';

    cout << "ingrese un caracter: ";
    cin >> caracter;

    while (caracter != '.')
    {
        if (caracter == 'a' || caracter == 'A') cantA++; //como las vocales pueden ser mayusculas o minudculas tomo ambas posibilidades
        if (caracter == 'e' || caracter == 'E') cantE++;
        if (caracter == 'i' || caracter == 'I') cantI++;
        if (caracter == 'o' || caracter == 'O') cantO++;
        if (caracter == 'u' || caracter == 'U') cantU++;
        if (caracter == '_' && ultimoCaracter != '_') cantP++; //Decidi tomar el espacio como una barra baja ya que no podemos ingresar el espacio en el cin
        if (caracter != '_') longitud++;
        if (caracter == '_') longitud = 0;
        if (longitud > longMasLarga) longMasLarga = longitud;

        ultimoCaracter = caracter;

        cout << "ingrese un caracter: ";
        cin >> caracter;
    }

    if (longitud != 0)cantP++;

    cout << "cantidad de A: " << cantA << endl;
    cout << "cantidad de E: " << cantE << endl;
    cout << "cantidad de I: " << cantI << endl;
    cout << "cantidad de O: " << cantO << endl;
    cout << "cantidad de U: " << cantU << endl;
    cout << "cantidad de palabras: " << cantP << endl;
    cout << "longitud de la palabra mas larga: " << longMasLarga << endl;

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
