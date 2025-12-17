#include <iostream> // Librería para entrada y salida estándar (cout, endl, cin)
#include <vector>   // Librería necesaria para usar la clase std::vector

/***************************** VECTOR *********************************
 * Sintaxis general:
 *
 * vector<tipo> nombre_vector;            // Vector vacío
 * vector<tipo> nombre_vector(n);          // Vector con n elementos
 * vector<tipo> nombre_vector(n, valor);   // Vector con n elementos inicializados
 *
 * El índice de los vectores empieza en 0
 **********************************************************************/

/***************************** MÉTODOS *********************************
 * at()        -> Accede a un elemento comprobando límites
 *                Lanza std::out_of_range si el índice no existe
 *
 * push_back() -> Añade un nuevo elemento al final del vector
 *                El tamaño del vector aumenta en 1
 **********************************************************************/

using namespace std; // Permite usar cout, cin, vector y endl sin escribir std::

int main()
{
    // Mensaje para pedir al usuario el número de elementos del vector
    cout << "¿Cuántos elementos quieres que tenga el vector?" << endl;

    // Variable donde se almacenará el número de elementos
    int numElementos = 0;

    // Lectura del número de elementos introducido por el usuario
    cin >> numElementos;

    // Creación de un vector de enteros con numElementos posiciones
    // Los valores se inicializan por defecto a 0
    vector<int> numeros(numElementos);

    // Bucle for para rellenar el vector
    // Recorre todas las posiciones desde 0 hasta size() - 1
    for (size_t i = 0; i < numeros.size(); i++)
    {
        // Pide al usuario el valor para cada posición del vector
        cout << "Introduce el elemento del vector numero: " << i + 1 << endl;

        // Almacena el valor introducido en la posición i
        numeros[i];
        cin >> numeros[i];
    }

    // Mensaje para indicar que se van a mostrar los elementos
    cout << "Elementos almacenados en el vector" << endl;

    // Bucle for para mostrar los elementos almacenados
    for (size_t j = 0; j < numeros.size(); j++)
    {
        // Muestra el valor almacenado en la posición j
        cout << numeros[j] << endl;
    }

    return 0; // Indica que el programa terminó correctamente
}
