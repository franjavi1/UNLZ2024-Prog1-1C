/*Desrraolor un programa que le solicite un set de calificaciones al usuario 
el usuario puede ingresar n veces lo que quiera
el usuario puede ingresar del 1 ak 10 si ingresa 0 
el usuario no ingresara numeros negativos
mostrar el promedio de las calificaciones 
mostrar la cantidad de notas ingresadas*/


#include <iostream>;

using namespace std;

int main(){
		
	
		float suma=0;
		int contador=0;
		float num;
		cout<<"Ingrese la calficacion  "<<endl;
		cin>>num;
	
		
		if(num>0 && num<11){
			suma=suma+num;
			contador=contador+1;
			while(num!=0)
			{ 	
				cout<<"Ingrese la calficacion  "<<endl;
					cin>>num;
				if (num>0 && num<11){
					suma=suma+num;
					contador++;
			}
				
		
		}
	}
		else{
			cout<<"no ingreso nada"<<endl ;
		
		}
				

	
		
		
		cout<<"El promedio de las notas es: "<<suma/contador<<" y las notaas ingresadas son: "<<contador<<endl;
		
		
	return 0;
}

