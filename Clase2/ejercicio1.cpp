#include <iostream>


using namespace std;

int main(){
	
	
		int base;
		int altura;
		cout <<"Ingrese la medida de la base del rectangulo: ";
		cin >>base;
		
		cout<<"Ingrese la altura del rectangulo: ";
		cin >>altura;
		
		int area= base*altura;
		int perimetro =base*2+altura*2;
		
		cout<<"El area del rectangulo es: "<<area<<endl;
		
		cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;

		system("pause");
		return 0;

}
