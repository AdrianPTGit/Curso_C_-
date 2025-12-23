#include <iostream> // Librería estándar para entrada y salida (cout, endl)

using namespace std; // Permite usar cout sin escribir std::

// Función inline que suma dos números enteros
// La palabra clave 'inline' sugiere al compilador
// reemplazar la llamada a la función por su código
// para mejorar el rendimiento en funciones pequeñas
inline int sumar(int a, int b)
{
    // Devuelve la suma de los dos parámetros
    return a + b;
}

int main()
{
    // Llama a la función sumar con los valores 13 y 75
    // El resultado de la suma se almacena en la variable 'resultado'
    int resultado = sumar(13, 75);

    // Muestra el resultado por pantalla
    cout << resultado;

    return 0; // Finaliza el programa correctamente
}


/*
 * NOTA IMPORTANTE SOBRE inline
 *
 * - No garantiza que el compilador inserte el código directamente,
 *   solo actúa como una sugerencia al compilador.
 *
 * - Se utiliza normalmente en funciones pequeñas y que se llaman
 *   con mucha frecuencia para reducir la sobrecarga de llamadas.
 *
 * Posibles ampliaciones:
 * - Ejemplo sin inline para comparar
 * - Casos en los que no conviene usar inline
 * - Ejercicio típico de examen sobre inline
 */
