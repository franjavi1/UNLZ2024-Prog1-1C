/*Desarrollar un programa que solicite el año de nacimiento de una persona, calcular su
edad: Si la edad es mayor o igual a 18 años, imprimir "La persona es mayor de edad",
de lo contrario, imprimir "La persona es menor de edad"*/
#include <iostream>

using namespace std;

int main(){
    //Definición de variables
    int nacimiento,actual,edad;

    //Ingreso de variables
    cout<<"Ingrese su año de nacimiento: ";
    cin>>nacimiento;

    cout<<"Ingrese año actual: ";
    cin>>actual;
    
    //Cálculo de edad
    edad =actual-nacimiento;

    
    if (edad>=18){
        cout<<"La persona es mayor de edad"<<endl;
    }
    else{
       cout<<"La persona es menor de edad: "<<endl;
    }

    return 0;
}