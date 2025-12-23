#include <iostream> // Librería estándar para entrada y salida (cout, endl)

using namespace std; // Permite usar cout y endl sin escribir std::

// Función que simula la creación de una ventana
// Parámetros con valores por defecto:
// - ancho: ancho de la ventana (por defecto 800)
// - alto: alto de la ventana (por defecto 600)
// - titulo: nombre de la ventana (por defecto "Mi ventana")
// - completa: indica si la ventana será en pantalla completa (por defecto false)
void CrearVentana(int ancho = 800, int alto = 600, string titulo = "Mi ventana", bool completa = false)
{
    // Muestra la información de la ventana por pantalla
    cout << "Creando ventana: " << titulo << "\n"
         << "Ancho: " << ancho << "\n"
         << "Alto: " << alto << "\n"
         << "Pantalla completa: " << (completa ? "Si" : "No") << "\n\n";
}

int main()
{
    // Llamada a la función sin pasar parámetros
    // Se utilizan todos los valores por defecto
    CrearVentana();

    // Llamada a la función pasando ancho, alto y título
    // El parámetro 'completa' toma el valor por defecto (false)
    CrearVentana(400, 200, "Mi ventana 2");

    // Llamada a la función pasando todos los parámetros
    CrearVentana(100, 300, "Mi ventana 3", true);

    return 0; // Finaliza el programa correctamente
}
