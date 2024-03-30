#include <iostream>
//Calcular el área y el perímetro de una circunferencia:
using namespace std;

const double PI = 3.141592;
int main(){
//declaracion variables
double radio;
double area;
double perimetro;

//Ingreso datos del radio

cout<<"Ingrese el radio: ";
cin>>radio;

//calculo del area y el perimetro

area = PI * radio* radio;
perimetro = PI * radio * 2;


//Imprime el resultado en pantalla

cout<<"El área del ciruculo es de: "<<area<<endl;
cout<<"El perímetro de la cincunferencia es "<<perimetro<<endl;



return 0;

}
