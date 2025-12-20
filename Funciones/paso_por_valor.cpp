#include <iostream>  // Librería estándar para entrada y salida (cin, cout)
#include <cmath>     // Librería matemática (no se usa en este ejemplo, pero incluida)

using namespace std; // Permite usar cout, endl, etc., sin escribir std::

// Función que recibe un número entero como parámetro
// Cambia el valor de 'num' dentro de la función, pero NO afecta la variable original fuera de la función
void ejemploFuncion(int num){
    num = 50;  // Asigna 50 a la variable local 'num'
}

int main(){
    int miNum = 10;  // Declaración e inicialización de una variable entera

    // Imprime el valor original de la variable miNum
    cout << "Valor original: " << miNum << endl;

    // Llama a la función ejemploFuncion pasando miNum como argumento
    ejemploFuncion(miNum);

    // Imprime el valor de miNum después de llamar a la función
    // Como la función no usa referencia, miNum no cambia
    cout << "Despues de llamar a la funcion: " << miNum << endl; 

    return 0; // Indica que el programa terminó correctamente
}
