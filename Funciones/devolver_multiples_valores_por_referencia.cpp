#include <iostream> // Librería estándar para entrada y salida (cin, cout)
#include <cmath>    // Librería matemática (no se usa en este ejemplo)
#include <vector>   // Librería necesaria para usar la clase vector

using namespace std; // Permite usar cout, vector, endl sin escribir std::

// Función que recibe un vector de enteros POR REFERENCIA (&)
// Esto evita copiar el vector y permite modificar el original
void duplicarElementos(vector<int> &vec)
{
    // Bucle for-each que recorre cada elemento del vector
    // 'valor' es una REFERENCIA a cada elemento del vector
    for (int &valor : vec)
    {
        // Multiplica cada elemento por 2
        // Al ser referencia, el cambio afecta directamente al vector original
        valor *= 2;
    }
}

int main()
{
    // Vector de enteros inicializado con 5 valores
    vector<int> numeros = {1, 2, 3, 4, 5};

    // Muestra los valores originales del vector
    cout << "Valores originales: ";

    // Recorre el vector mostrando cada elemento
    // Aquí 'valor' es una COPIA (no modifica el vector)
    for (int valor : numeros)
    {
        cout << valor << " ";
    }

    cout << endl; // Salto de línea

    // Llamada a la función pasando el vector por referencia
    // La función modificará directamente el vector 'numeros'
    duplicarElementos(numeros);

    // Muestra los valores después de duplicarlos
    cout << "Valores despues de llamar a la funcion: ";

    // Se vuelve a recorrer el vector ya modificado
    for (int valor : numeros)
    {
        cout << valor << " ";
    }

    cout << endl; // Salto de línea final

    return 0; // Indica que el programa terminó correctamente
}
