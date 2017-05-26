#include "Cliente.h"
#include "Usuario.h"

Cliente::Cliente(string Nombre,string ID,string NumeroCel,int Edad,string Username,string Contraseña,string Direccion ,int Estrellas){
    this->Direccion =Direccion ;
    this->Estrellas=Estrellas;
    this->Nombre=Nombre;
    this->ID=ID;
    setNumeroCel(NumeroCel);
    setEdad(Edad);
    this->Username=Username;
    this->Contraseña=Contraseña;

}

Cliente::Cliente(){

}

void Cliente::setDireccion (string Direccion ){
   this-> Direccion =Direccion ;
}

string Cliente::getDireccion (){
   return Direccion ;
}

void Cliente::setEstrellas(int Estrellas){
   this-> Estrellas=Estrellas;
}

int Cliente::getEstrellas(){
   return Estrellas;
}