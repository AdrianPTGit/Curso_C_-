#include <iostream>   // Librería para entrada y salida estándar

using namespace std;  // Permite usar cout y cin sin escribir std::

int main()
{
    int numero;       // Variable para almacenar el número introducido por el usuario

    // El bucle do-while se ejecuta AL MENOS una vez,
    // ya que la condición se comprueba al final
    do {
        cout << "Introduce un numero mayor que 0: ";
        cin >> numero;    // Se lee el número desde teclado
    }
    // La condición se evalúa después de ejecutar el bloque do
    while (numero <= 0);  // Si el número es menor o igual que 0, el bucle se repite

    // Cuando se sale del bucle, el número es válido
    cout << "Numero correcto: " << numero << endl;

    return 0;         // Finaliza el programa correctamente
}
