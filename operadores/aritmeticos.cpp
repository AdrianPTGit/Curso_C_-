#include <iostream>  // Librería para entrada y salida estándar

using namespace std;

int main()
{
    // Declaración de variables enteras
    int a = 5;
    int b = 5;

    // Operaciones aritméticas básicas
    int suma = a + b;             // Suma de a y b
    int resta = a - b;            // Resta de a y b
    int multiplicacion = a * b;   // Multiplicación de a y b
    int modulo = a % b;           // Resto de la división de a entre b

    // Mostrar resultados por pantalla
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;
    cout << "Módulo: " << modulo << endl;

    // Operadores de incremento y decremento

    /**
     * 
     * Explicación de los operadores de incremento/decremento:

    *    ++a → aumenta el valor de a antes de usarlo.

    *    a++ → usa primero el valor de a, luego lo aumenta.

    *    --a → disminuye el valor de a antes de usarlo.

    *    a-- → usa primero el valor de a, luego lo disminuye.
     
     */
    --a;   // Pre-decremento: a = a - 1
    cout << "Pre-decremento (--a): " << a << endl;

    a--;   // Post-decremento: primero se usa el valor, luego se decrementa
    cout << "Post-decremento (a--): " << a << endl;

    ++a;   // Pre-incremento: a = a + 1
    cout << "Pre-incremento (++a): " << a << endl;

    a++;   // Post-incremento: primero se usa el valor, luego se incrementa
    cout << "Post-incremento (a++): " << a << endl;

    return 0;  // Fin del programa
}
