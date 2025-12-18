#include <iostream>   // Librería para entrada y salida estándar (cout, cin)
#include <cmath>      // Librería matemática que incluye la función pow()

using namespace std;  // Permite usar cout y cin sin escribir std::

/**
 * Función que eleva una base a un exponente
 *
 * @param base      Número base introducido por el usuario
 * @param exponente Exponente al que se eleva la base
 * @return          Resultado de elevar la base al exponente
 */
double elevarPotencia(double base, double exponente)
{
    // La función std::pow calcula base elevado a exponente (base^exponente)
    return std::pow(base, exponente);
}

int main()
{
    double base, exponente;  // Variables para almacenar la base y el exponente

    // Solicita al usuario que introduzca la base
    cout << "Introduce la base: ";
    cin >> base;

    // Solicita al usuario que introduzca el exponente
    cout << "Introduce exponente: ";
    cin >> exponente;

    // Llama a la función elevarPotencia usando los valores introducidos
    // y muestra el resultado por pantalla
    cout << "El resultado es: " << elevarPotencia(base, exponente);

    return 0;   // Finaliza el programa correctamente
}
