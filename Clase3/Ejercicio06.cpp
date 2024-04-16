/*
Desarrollar un programa que simule una calculadora simple. El usuario debe ingresar
dos números y luego seleccionar una operación (suma, resta, multiplicación o división).
El programa debe realizar la operación seleccionada e imprimir el resultado.
*/
#include <iostream>

using namespace std;

int main()
{
    float num1;
    float num2;
    int opcion;
    cout << "----CALCULADORA----" << endl;
    cout << "Ingrese 1 numero: ";
    cin >> num1;

    cout << "Ingrese 2 numero: ";
    cin >> num2;

    cout << "INGRESE 1 PARA SUMAR - 2 PARA RESTAR - 3 PARA MULTIPLICAR -4 PARA DIVIDIR: ";
    cin >> opcion;

    switch (opcion)
    {

    case 1:
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case 2:
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case 3:
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case 4:
        if (num2 != 0)
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        else
        {
            cout << "NO SE PUEDE DIVIDIR POR 0";
        }

        break;

    default:
        cout << "TECLA INCORRECTA" << endl;
        break;
    }

    return 0;
}
