
/* Desarrollar un programa que solicte al usuario la carga de array de 5 elementos y ordenarlos de forma ascendente, mostrar los dos array
Ordenarlos de forma ass*/

#include <iostream>;

using namespace std;

int main(){
		
		int lista[5];
		for (int i=0; i<5; i++){
			
			cout <<"ingrese numero"<<endl;
			cin>>lista[i];
		}
		
		for (int i=0; i<5; i++){
			
			cout<<lista[i]<<" |  ";
		}
		
		cout<<endl;
		for (int i=0; i<5; i++){
			for (int j=0;j<5-1; j++){
				
				if(lista[j]<lista[j+1]){
				int aux;
				aux=lista[j+1];
				lista[j+1]=lista[j];
				lista[j]=aux;
				}
				
			}	
		
		}	
		for (int i=0; i<5; i++){
			
			cout<<lista[i]<<" |  ";
		}


return 0;
}
