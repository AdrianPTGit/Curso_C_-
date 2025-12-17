#include <iostream>  // Librería para entrada y salida estándar (cin, cout)

using namespace std; // Permite usar cout y cin sin escribir std::

int main()
{
    // Variable booleana que indica si la persona tiene carnet de conducir
    bool tieneCarnet = true;

    // Variable entera para almacenar la edad
    int edad = 20;

    // Mensaje para pedir la edad al usuario
    cout << "Escribe tu edad." << endl;

    // Lectura de la edad introducida por el usuario
    cin >> edad;

    // Comprobación de si la persona es menor o mayor de edad
    if (edad < 18)
    {
        cout << "Eres menor de edad." << endl;
    }
    else
    {
        cout << "Eres mayor de edad." << endl;
    }

    // Condición compuesta:
    // edad >= 18  → es mayor de edad
    // tieneCarnet → posee carnet de conducir
    // &&          → ambas condiciones deben cumplirse
    if (edad >= 18 && tieneCarnet)
    {
        cout << "Puedes conducir" << endl;
    }

    return 0; // Fin del programa
}
