#include "Usuario.h"
#include <string>
#include <iostream>


using namespace std;

Usuario::Usuario(string Nombre,string ID,string NumeroCel,int Edad,string Username,string Contra){
    this->Nombre=Nombre;
    this->ID=ID;
    setNumeroCel(NumeroCel);
    setEdad(Edad);
    this->Username=Username;
    this->Contra=Contra;
}

Usuario::Usuario(){

}

void Usuario::guardarTXT(){
    ofstream file;
    string ruta = "Nombre.txt";
    stringstream ss;
    ss<<"Usuarios.txt";
    ruta=ss.str();
    file.open(ruta.c_str());
    escribir(file);
    file.close();
}

void Usuario::escribir(ofstream& file){
  file<<"Nombre:\t"<<Nombre<<", ID: "<<ID<<", NumeroCel: "<<NumeroCel<<", Edad: "<<Edad<<", Username: "<<Username<<", Contraseña: "<<Contra;
}

void Usuario::setNombre(string Nombre){

   this-> Nombre=Nombre;
}

string Usuario::getNombre(){
   return Nombre;
}

void Usuario::setID(string ID){
   this-> ID=ID;
}

string Usuario::getID(){
   return ID;
}

void Usuario::setNumeroCel(string NumeroCel){
	if(NumeroCel.size()>=8){
   		this-> NumeroCel=NumeroCel;
	} else{
		cout<<"Solo numeros mayores que 8"<<endl;
	}
}

string Usuario::getNumeroCel(){
   return NumeroCel;
}

void Usuario::setEdad(int Edad){
	if(Edad>=18){
   		this-> Edad=Edad;
	}else{
		cout<<"Solo mayores de 18 años lo siento :("<<endl;
	}
}

int Usuario::getEdad(){
   return Edad;
}

void Usuario::setUsername(string Username){
   this-> Username=Username;
}

string Usuario::getUsername(){
   return Username;
}

void Usuario::setContra(string Contra){
   this-> Contra=Contra;
}

string Usuario::getContra(){
   return Contra;
}
