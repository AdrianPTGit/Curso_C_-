#include <iostream>  // Incluye la librería iostream para usar cin y cout
using namespace std; // Permite usar cin, cout, string, endl sin escribir std::

int main() // Función principal del programa
{
    // Declaración e inicialización de una variable tipo string
    // que almacena el nombre del empleado
    string nombreEmpleado = "Adrian";

    // Declaración e inicialización de una variable entera
    // que almacena la edad del empleado
    int edadEmpleado = 23;

    // Declaración de una variable de tipo double
    // para almacenar el salario del empleado
    double salario;

    // Muestra un mensaje en pantalla solicitando el salario
    cout << "Escribe un salario: " << endl;

    // Lee el valor introducido por el usuario y lo guarda en salario
    cin >> salario;

    // Muestra un mensaje en pantalla solicitando la edad
    cout << "Escribe una edad: " << endl;

    // Lee el valor introducido por el usuario y lo guarda en edadEmpleado
    cin >> edadEmpleado;

    // Muestra por pantalla los datos del empleado
    cout << "El empleado: "
        << nombreEmpleado
        << " Edad: "
        << edadEmpleado
        << " Salario: "
        << salario
        << endl;

    // Finaliza el programa devolviendo 0 (ejecución correcta)
    return 0;
}
