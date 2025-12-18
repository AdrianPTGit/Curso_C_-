#include <iostream>   // Librería para entrada y salida estándar

using namespace std;  // Permite usar cout y cin sin escribir std::

int main()
{
    int contador = 1;   // Variable contador inicializada en 1

    // El bucle while se ejecuta MIENTRAS la condición sea verdadera
    while (contador <= 5)
    {
        cout << "Contador: " << contador << endl;  // Muestra el valor actual
        contador++;   // Incrementa el contador en 1 para evitar un bucle infinito
    }

    return 0;   // Finaliza el programa correctamente
}
