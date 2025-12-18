#include <iostream>   // Librería para entrada y salida estándar (cout, endl)

/**
 * El operador ternario es una forma compacta de escribir
 * una estructura if–else.
 *
 * Sintaxis:
 * condicion ? expresion_si_verdadera : expresion_si_falsa;
 *
 * - La condición se evalúa como true o false
 * - Si es true, se ejecuta la primera expresión
 * - Si es false, se ejecuta la segunda expresión
 */

using namespace std;  // Permite usar cout sin escribir std::

int main()
{
    int a = 67;       // Variable entera inicializada con el valor 67

    // Operador ternario:
    // Si 'a' es mayor o igual que 50, se muestra "mayor"
    // En caso contrario, se muestra "menor"
    (a >= 50) ? cout << "mayor" : cout << "menor";
    cout << endl;

    //Aunque el operador ternario se puede usar con cout, no es lo más recomendable para código real. 
    //Normalmente se usa para asignaciones, por ejemplo:
    string resultado = (a >= 50) ? "mayor" : "menor";
    cout << resultado;


    return 0;         // Indica que el programa terminó correctamente
}
