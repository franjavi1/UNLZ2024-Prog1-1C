#include<iostream>

using namespace std;

//Imprimir datos personales:

int main(){
    //declaracion de variables

    string nombre;
    string apellido;
    int edad;
    string direccion;
    string localidad;
    string provincia;
    string pais;
    string telefono;

    //entrada de datos
  
    cout<<"Ingrese su nombre: ";
    getline(cin, nombre);

    cout<<"Ingrese su apellido: ";
     getline(cin, apellido);

    cout<<"Ingrese su edad: ";
    cin>>edad;
    cin.ignore();

    cout<<"Ingrese su dirección: ";
    getline(cin, direccion);

    cout<<"Ingrese su localidad: ";
    getline(cin, localidad);

    cout<<"Ingrese su provincia: ";
    getline(cin,provincia);

    cout<<"Ingrese su pais: ";
    getline(cin,pais);

    cout<<"Ingrese su teléondo: ";
    getline(cin,telefono);

    //Salida de dtaos por pantalla
    cout<<"********************"<<endl; 
    cout<<"--DATOS PERSONALES--"<<endl; 
     cout<<"********************"<<endl; 
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Direccion es: "<<direccion<<endl;
    cout<<"Localidad: "<<localidad<<endl;
    cout<<"Provincia: "<<provincia<<endl;
    cout<<"Pais:  "<<pais<<endl;
    cout<<"Teléfono es :"<<telefono<<endl;







    




}