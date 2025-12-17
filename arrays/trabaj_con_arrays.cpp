#include <iostream>   // Incluye la librería para usar entrada y salida estándar (cout, cin, endl)

using namespace std;  // Permite usar cout y endl sin escribir std::

int main (){           // Función principal del programa

    // Declaración de un array de enteros con 3 elementos
    // Los índices van de 0 a 2
    int numeros []{15, 20, 25}; 
    
    // Muestra el primer elemento del array (índice 0)
    cout << numeros[0] << endl;

    // Muestra el segundo elemento del array (índice 1)
    cout << numeros[1] << endl;

    // Muestra el tercer elemento del array (índice 2)
    cout << numeros[2] << endl;

    // Declaración de un array de 10 posiciones
    // Solo se inicializan las 3 primeras; el resto se inicializan a 0
    int edades [10]{15, 30, 32};
    
    // Muestra el valor del índice 1 (30)
    cout << edades[1] << endl;

    // Muestra el valor del índice 5
    // Como no fue inicializado explícitamente, su valor es 0
    cout << edades[5]<<endl;

    return 0;          // Indica que el programa terminó correctamente
}
