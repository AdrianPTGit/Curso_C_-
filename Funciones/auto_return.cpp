#include <iostream>     // Librería estándar para entrada y salida (cout, endl)

using namespace std;    // Permite usar cout, endl, etc. sin escribir std::

// Función que suma dos números enteros
// Se usa 'auto' para que el compilador deduzca el tipo de retorno (int)
auto sumar(int a, int b)
{
    return a + b;       // Devuelve la suma de a y b
}

int main()
{
    int x = 5, y = 6;   // Declaración e inicialización de dos variables enteras

    // Muestra el resultado de llamar a la función sumar con x e y
    cout << "Resultado: " << sumar(x, y) << endl;

    return 0;           // Indica que el programa terminó correctamente
}
