#include <iostream>

//Elabore un algoritmo en C++ para convertir pesos argentinos a dólares


using namespace std;
int main(){
    //Declaracion de variables
    float pesos ;
    float dolares;
    float cotizacion ;
 
    //Ingreso de dtaos

    cout <<"Ingrese la cantidad de pesos: ";
    cin >> pesos;

    cout <<"Ingrese la cotizacion del dolar actual: ";
    cin>> cotizacion;



    //calculo de conversion de pesos a dolares

    dolares = pesos/cotizacion;

    cout<<pesos<<" pesos equivalen a : "<<dolares<<" dolares";





return 0;
}
