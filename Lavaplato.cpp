#include "Lavaplato.h"

Lavaplato::Lavaplato( int Nivel, string Nombre, string ID, string NumeroCel, int Edad, string Username, string Contra, int AContratacion, double Sueldo) : Personal(Nombre, ID, NumeroCel, Edad, Username, Contra, AContratacion, Sueldo) {

	this-> Nivel=Nivel;
	this->Nombre=Nombre;
   this-> ID = ID;
   this-> NumeroCel=NumeroCel;
   this-> Edad=Edad;
   this->Username=Username;
   this->Contra=Contra;
   this->AContratacion=AContratacion;
   this->Sueldo=Sueldo;
}




int Lavaplato::getNivel(){

	return Nivel;
}

void Lavaplato::setNivel(int Nivel){

	this->Nivel =Nivel;

}

