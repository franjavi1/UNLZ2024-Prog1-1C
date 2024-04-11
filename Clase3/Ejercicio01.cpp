/*
Desarrollar un programa que solicite al usuario ingresar tres números enteros y que imprima el mayor de los tres
*/
#include <iostream>

using namespace std;

int main(){
    //Declaración de variables
    int num1;
    int num2;
    int num3;

    //ingreso de datos
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"ingrese el segundo numero: ";
    cin>>num2;
    cout<<"ingrese el tercer numero: ";
    cin>>num3;

    //Comparación de datos
    int mayor =num1;

    if (num2 >mayor){
        mayor=num2;
    }

    if (num3>mayor){
        mayor=num3;
    }

    //Impresión del mayor

    cout<<"El mayor de los tres numeros es "<<mayor;
  
    
    return 0;
}