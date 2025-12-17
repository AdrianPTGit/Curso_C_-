#include <iostream>

using namespace std;

int main()
{
    int edad = 20;
    cout << "Escribe tu edad." << endl;

    cin >> edad;

    if (edad <= 18)
    {
        cout << "Eres menor de edad." << endl;
    }
    else
    {
        cout << "Eres mayor de edad." << endl;
    }
    return 0;
}