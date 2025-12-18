#include <iostream>   // Librería para entrada y salida estándar
#include <vector>     // Librería necesaria para usar std::vector

using namespace std;  // Permite usar cout y vector sin escribir std::

int main()
{
    // Vector de enteros con valores iniciales
    vector<int> numeros = {10, 20, 30, 40, 50};

    // Bucle for-each (range-based for)
    // Recorre cada elemento del vector uno a uno
    for (int numero : numeros)
    {
        // 'numero' contiene el valor del elemento actual
        cout << numero << endl;   // Muestra el número por pantalla
    }

    return 0;   // Finaliza el programa correctamente
}
