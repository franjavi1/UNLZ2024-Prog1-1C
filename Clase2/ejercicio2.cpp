#include <iostream>

using namespace std;

//Elabore un algoritmo en C++ para convertir centímetros a metros.

int main(){
    float centimetros;

    //Ingrese los centimetros
    cout<<"Ingrese los centrimetros a convertir a metros: ";

    cin>>centimetros;
    //formula para pasar de centimetros a metros
    float metros=centimetros/100;

    //Impresion de los cenimetros convertidos a metros.

    cout<<centimetros<<" centimetros equivalen a "<<metros<<" metros."<<endl;


    
    return 0;
}