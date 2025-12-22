#include <iostream> // Librería estándar para entrada y salida (cout, endl)
using namespace std; // Permite usar cout y endl sin escribir std::

// Función con parámetros por defecto
// Si no se envían argumentos, se usan los valores indicados (= 10 y = 20)
void mostrar(int x = 10, int y = 20)
{
    // Muestra los valores recibidos por la función
    cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
    // Llamada sin argumentos
    // Se usan ambos valores por defecto: x = 10, y = 20
    mostrar();

    // Llamada con un solo argumento
    // x toma el valor 5 y y usa su valor por defecto (20)
    mostrar(5);

    // Llamada con dos argumentos
    // Se usan los valores proporcionados: x = 5, y = 8
    mostrar(5, 8);

    return 0; // Finaliza el programa correctamente
}
