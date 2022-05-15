// Ejercicio_19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

float montoConIVA(float monto) {
    return monto + monto * 0.21;
}

void costoYMinutosExcedidios(float costo, float cantMinLibres, float cargoXMinExcedido, float cantMinUtilizados, float& montoAbonar, float& cantMinExcedido) {
    //decidi usar los valores como float ya que los mismos me permiten realizar divisiones y obtener decimales, ademas los mismos pueden llegar a recibir decimales.
    //use una funcion void con dos argumentos con referencia ya que me parecia una forma mus sencilla de devolver dos valores distintos.

    if (cantMinLibres >= cantMinUtilizados) {
        montoAbonar = montoConIVA(costo);
        cantMinExcedido = 0;

    }
    else {
        montoAbonar = montoConIVA(costo + cargoXMinExcedido * (cantMinUtilizados - cantMinLibres));
        cantMinExcedido = cantMinUtilizados - cantMinLibres;

    }
    return;
}



int main()
{
    float costoServ , cantMinLibres , cargoXMinExcedido , cantMinUtilizados , montoAbonar, cantMinExcedido;
    cout << "Ingrese el costo del abono telefonico: ";
    cin >> costoServ;
    cout << "Ingrese la cantidad de minutos libres: ";
    cin >> cantMinLibres;
    cout << "Ingrese el costo por minuto excedido: ";
    cin >> cargoXMinExcedido;
    cout << "Ingrese la cantidad de minutos utilizados: ";
    cin >> cantMinUtilizados;
    cout << endl;

    costoYMinutosExcedidios(costoServ, cantMinLibres, cargoXMinExcedido, cantMinUtilizados, montoAbonar, cantMinExcedido);

    cout << "Monto a abonar: " << montoAbonar << endl;
    cout << "Cantidad de minutos excedido: " << cantMinExcedido << endl;

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
