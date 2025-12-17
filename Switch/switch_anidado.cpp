#include <iostream>
using namespace std;

int main()
{
    char idioma, categoria;

    // Selección de idioma
    cout << "Selecciona el idioma (E: Espanol, I: Ingles): ";
    cin >> idioma;

    switch (idioma)
    {
        case 'E':
        case 'e':
            cout << "Selecciona una categoria (L: Libros, R: Ropa, T: Tecnologia): ";
            cin >> categoria;

            switch (categoria)
            {
                case 'L':
                case 'l':
                    cout << "Categoria Libros" << endl;
                    break;

                case 'R':
                case 'r':
                    cout << "Categoria Ropa" << endl;
                    break;

                case 'T':
                case 't':
                    cout << "Categoria Tecnologia" << endl;
                    break;

                default:
                    cout << "Categoria no valida" << endl;
            }
            break;

        case 'I':
        case 'i':
            cout << "Select a category (B: Books, C: Clothing, T: Technology): ";
            cin >> categoria;

            switch (categoria)
            {
                case 'B':
                case 'b':
                    cout << "You have selected Books category" << endl;
                    break;

                case 'C':
                case 'c':
                    cout << "You have selected Clothing category" << endl;
                    break;

                case 'T':
                case 't':
                    cout << "You have selected Technology category" << endl;
                    break;

                default:
                    cout << "Invalid category" << endl;
            }
            break;

        default:
            cout << "Idioma no valido" << endl;
    }

    return 0; // Fin del programa
}
