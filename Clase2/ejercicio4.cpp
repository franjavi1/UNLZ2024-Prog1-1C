#include <iostream>
#include<cmath>

//Calcular el área y el perímetro de un triángulo equilátero:
using namespace std;
float lado;
float altura;
float area;
float perimetro;

int main(){
    //Declaracio de las variables
    
   

    //Ingreso de datos (altura y base)
    cout<<"Ingrese el lado  del triaangulo equilatero: ";
    cin>>lado;
    cout<<"Ingrese la altura del triangulo equilatero: ";
    cin>>altura;

    //calculo del area y perimetro del triangulo equilatero;
   
    area = lado * altura/2;
    perimetro = lado *3;
  
   
   

    //impresion del area y perimetro del triangulo equilatero; 

    cout<<"El area del triangulo equilatero es: "<<area<<endl;
    cout<<"El perimetro del triangulo equilatero es: "<<perimetro<<endl;
   



return 0;
}
