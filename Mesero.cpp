#include "Mesero.h"

Mesero::Mesero(string Nombre,string ID,string NumeroCel,int Edad,string Username,string Contra, int AContratacion,double Sueldo, string Platillos){
    this->Platillos=Platillos;
	this->AContratacion=AContratacion;
    this->Sueldo=Sueldo;
    this->Nombre=Nombre;
    this->ID=ID;
    setNumeroCel(NumeroCel);
    setEdad(Edad);
    this->Username=Username;
    this->Contra=Contra;
	
}

Mesero::Mesero(){

}

void Mesero::escribir(ofstream& file){
    Usuario::escribir(file);
    Personal::escribir(file);
    file<<"Platillo :"<<Platillos<<endl;  
}

void Mesero::setPlatillos(string Platillos){
   this-> Platillos=Platillos;
}
string Mesero::getPlatillos(){
   return Platillos;
}

void entregar(string Platillos){
    
    
}