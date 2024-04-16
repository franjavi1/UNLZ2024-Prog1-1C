/*
Desarrollar un programa que solicite al usuario ingresar un número del 1 al 7 y que
imprima el día de la semana correspondiente. (Por ejemplo, si el usuario ingresa 1,
imprimir "Lunes"; si ingresa 2, imprimir "Martes", etc.)
*/
#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "INGRESE UN NUMERO DEL 1 A L 7 PARA SABER EL DIA DE LA SEMANA: ";
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "LUNES";
        break;

    case 2:
        cout << "MARTES";
        break;

    case 3:
        cout << "MIERCOLES";
        break;

    case 4:
        cout << "JUEVES";
        break;

    case 5:
        cout << "VIERNES";
        break;

    case 6:
        cout << "SABADO";
        break;

    case 7:
        cout << "DOMINGO";
        break;

    default:
        cout << "TECLA EQUIVOCADA";
        break;
    }

    return 0;
}