/**
 Desarrollar un programa que solicite al usuario ingresar un carácter y que determine si
es una vocal o una consonante
**/
#include <iostream>

using namespace std;

int main()
{

    char caracter;
    cout << "Ingrese el caracter para saber si es vocal o caonsonante:  ";
    cin >> caracter;

    caracter = tolower(caracter);

    switch (caracter)
    {

    case 'a':
        cout << "Ha ingresado una VOCAL" << endl;
        break;

    case 'e':
        cout << "Ha ingresado una VOCAL" << endl;
        break;

    case 'i':
        cout << "Ha ingresado una VOCAL" << endl;
        break;

    case 'o':
        cout << "Ha ingresado una VOCAL" << endl;
        break;

    case 'u':
        cout << "Ha ingresado una VOCAL" << endl;
        break;

    default:
        if (caracter >= 'a' && caracter <= 'z')
        {
            cout << "Ha ingresado una CONSONANTE" << endl;
        }
        else
        {

            cout << "No ha ingreado ni VOCAL ni CONSONANTE" << endl;
        }

        break;
    }

    return 0;
}