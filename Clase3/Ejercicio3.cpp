/*
Desarrollar un programa que determine si un año ingresado por el usuario es bisiesto o no.
 Un año es bisiesto si es divisible por 4 pero no por100, o si es divisible por 400.
*/
#include<iostream>>

using namespace std;

int main(){

//Declaracion de variables
int year;

//Ingreso de variables
cout<<"Ingrese el año:  ";
cin>>year;

//Calculo e impresion
if (year%100==0 && year%400==0){
    cout<<" Es un año BISIESTO";

}else if (year%4==0 && year%100!=0)  { 
        cout<<"Es un año BISIESTO";
    }
      else{
        cout <<"NO ES UN AÑO BISIESTO";   

}

    return 0;

}