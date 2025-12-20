#include <iostream>  // Librería estándar para entrada y salida (cin, cout)
#include <cmath>     // Librería matemática (no se usa en este ejemplo, pero incluida)

using namespace std; // Permite usar cout, endl, etc., sin escribir std::

// Función que recibe un número entero como parámetro **por referencia**
// Esto significa que cualquier cambio dentro de la función afectará la variable original
void ejemploFuncion(int &num){
    num = 50;  // Asigna 50 a la variable pasada como referencia
}

int main(){
    int miNum = 10;  // Declaración e inicialización de una variable entera

    // Imprime el valor original de la variable miNum
    cout << "Valor original: " << miNum << endl;

    // Llama a la función ejemploFuncion pasando miNum como argumento
    // Ahora, como se pasa por referencia, la función modificará directamente miNum
    ejemploFuncion(miNum);

    // Imprime el valor de miNum después de llamar a la función
    // Ahora miNum ha cambiado a 50 debido a la referencia
    cout << "Despues de llamar a la funcion: " << miNum << endl; 

    return 0; // Indica que el programa terminó correctamente
}
