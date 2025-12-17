#include <iostream>  // Librería para entrada y salida
#include <ctime>   // Librería para manejar fecha y hora


using namespace std;

int main()
{
    int opcion;
    time_t ahora = time(nullptr);

     // Convertirla a formato fecha local
    tm* fecha = localtime(&ahora);

    // Mostrar menú al usuario
    cout << "MENU DE OPCIONES" << endl;
    cout << "1. Saludar" << endl;
    cout << "2. Mostrar la fecha" << endl;
    cout << "3. Salir" << endl;
    cout << "Elige una opcion: ";

    // Leer la opción elegida
    cin >> opcion;

    // Estructura switch para evaluar la opción
    switch (opcion)
    {
        case 1: // Si opcion == 1
            cout << "Hola! Bienvenido al programa" << endl;
            break; // Sale del switch

        case 2: // Si opcion == 2
            cout << "Hoy es un buen dia para programar" << endl;
            // Obtener la fecha y hora actual en segundos desde 1970
            
            // Mostrar la fecha (día/mes/año)
            cout << "Fecha actual: "
                << fecha->tm_mday << "/"
                << fecha->tm_mon + 1 << "/"   // tm_mon va de 0 a 11
                << fecha->tm_year + 1900 << endl; // tm_year cuenta desde 1900
            break; // Sale del switch

        case 3: // Si opcion == 3
            cout << "Saliendo del programa..." << endl;
            break; // Sale del switch

        default: // Si no coincide con ningún case
            cout << "Opcion no valida" << endl;
            break;
    }

    return 0; // Fin del programa
}
