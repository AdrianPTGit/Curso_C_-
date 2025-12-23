#include <iostream>
using namespace std;

// Suma dos números enteros
int sumar(int a, int b)
{
    return a + b;
}

// Suma tres números enteros
int sumar(int a, int b, int c)
{
    return a + b + c;
}

// Suma dos números decimales
double sumar(double a, double b)
{
    return a + b;
}

int main()
{
    cout << sumar(3, 5) << endl;        // Llama a sumar(int, int)
    cout << sumar(2, 4, 6) << endl;     // Llama a sumar(int, int, int)
    cout << sumar(2.8, 3.5) << endl;    // Llama a sumar(double, double)

    return 0;
}