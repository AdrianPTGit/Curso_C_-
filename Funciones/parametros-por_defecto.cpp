#include <iostream> // Librería estándar para entrada y salida (cout, endl)

using namespace std; // Permite usar cout y endl sin escribir std::

// Función que muestra un mensaje por pantalla
// Parámetros:
// - msg: mensaje a mostrar (por defecto "Mensaje por defecto")
// - veces: número de veces que se mostrará el mensaje (por defecto 1)
void mostrar(string msg = "Mensaje por defecto", int veces = 1)
{
    // Bucle que se ejecuta tantas veces como indique la variable 'veces'
    for (size_t i = 0; i < veces; i++)
    {
        // Muestra el mensaje por pantalla y salta de línea
        cout << msg << endl;
    }
}

int main()
{
    // Llama a la función mostrar sin parámetros
    // Se usan los valores por defecto
    mostrar();

    // Llama a la función pasando solo el mensaje
    // 'veces' toma el valor por defecto (1)
    mostrar("Hola");

    // Llama a la función pasando mensaje y número de repeticiones
    mostrar("Hola mundo!!!", 5);

    return 0; // Finaliza el programa correctamente
}
