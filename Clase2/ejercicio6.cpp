#include<iostream>

using namespace std;
//Calcular la distancia a la que se encuentra una tormenta:
const int VELOCIDAD_SONIDO = 343;
int main(){
    //definicion de variables
    int segundos;
    int distancia;

    //ingreso de del tiempo entre relampago y trueno
    cout<<"Ingrese el tiempo entre el trueno y el relampago en segundos ";
    cin>>segundos;

    //calculo de distancia

     distancia =segundos*VELOCIDAD_SONIDO;

    //Impresion de la distancia de la tormenta

    cout<<"La tormenta esta a "<<distancia<<" metros.";

    return 0;
}