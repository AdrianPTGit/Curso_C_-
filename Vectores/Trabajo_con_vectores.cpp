#include <iostream> // Librería para entrada y salida estándar (cout, endl)
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

using namespace std; // Permite usar cout, vector y endl sin escribir std::

int main()
{
    // Vector de enteros inicializado directamente con 5 valores
    // Índices válidos: 0 a 4
    vector<int> numeros{20, 39, 49, 0, 9};

    // Vector de caracteres con 3 valores
    // Cada carácter ocupa una posición
    vector<char> caracter{'a', 'd', 'w'};

    // Recorre el vector "numeros" usando un bucle for
    // size_t es el tipo recomendado para índices
    for (size_t i = 0; i < 5; i++)
    {
        // Muestra el valor almacenado en la posición i
        cout << numeros[i] << endl;
    }

    // Recorre el vector "caracter"
    for (size_t i = 0; i < 3; i++)
    {
        // Muestra el carácter en la posición i
        cout << caracter[i] << endl;
    }

    // Vector de tipo double con 5 elementos
    // Todos los elementos se inicializan con el valor 1200.34
    vector<double> salario_base(5, 1200.34);

    // Recorre y muestra el vector "salario_base"
    for (size_t i = 0; i < 5; i++)
    {
        cout << salario_base[i] << endl;
    }

    // Variable para recorrer el vector con un bucle while
    int i = 0;

    // Salto de línea para separar la salida
    cout << endl;

    // Bucle while que recorre el vector usando size()
    // size() devuelve el número de elementos del vector
    while (i < salario_base.size())
    {
        cout << salario_base[i] << endl;
        i++;
    }

    /******************************************************************
     * at() permite acceder a un elemento del vector comprobando límites.
     * Si el índice está fuera de rango, lanza una excepción:
     * std::out_of_range
     ******************************************************************/

    try
    {
        cout << "Acceso a un elemento con metodo at()" << endl;

        // Acceso correcto: índice 3 existe
        cout << salario_base.at(3) << endl;
    }
    catch (const out_of_range& e)
    {
        cerr << e.what() << endl;
        cout << "ERROR: Fuera de indice" << endl;
    }

    // Añade un nuevo elemento al final del vector
    // El tamaño pasa de 5 a 6
    salario_base.push_back(1789.98);

    try
    {
        cout << "Acceso a un elemento con metodo at()" << endl;

        // Acceso correcto: índice 5 es el último elemento
        cout << salario_base.at(5) << endl;
    }
    catch (const out_of_range& e)
    {
        cerr << e.what() << endl;
        cout << "ERROR: Fuera de indice" << endl;
    }

    return 0; // Indica que el programa terminó correctamente
}
