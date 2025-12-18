#include <iostream>   // Librería para entrada y salida estándar (cout, cin)
#include <cmath>     // Librería matemática que incluye la función pow()

using namespace std;  // Permite usar cout, cin y pow sin escribir std::

/**
 * Función que eleva una base a un exponente
 * @param base      Número base
 * @param exponente Exponente al que se eleva la base
 * @return          Resultado de base elevado a exponente
 */
double elevarPotencia(double base, double exponente)
{
    // La función pow() calcula base^exponente
    return std::pow(base, exponente);
}

int main()
{

    double base, exponente;

    cout << "Introduce la base: ";
    cin >> base;

    cout << "Introduce exponente: ";
    cin >> exponente;

    // Llama a la función elevarPotencia con base 5 y exponente 3
    // 5 elevado a 3 = 125
    cout << "El resultado es: " << elevarPotencia(base, exponente);

    return 0;   // Finaliza el programa correctamente
}
