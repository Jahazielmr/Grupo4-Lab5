#include"Personal.h"

Personal::Personal( string Puesto, string Nombre) : Persona(Nombre) {
	this-> Puesto=Puesto;
	this-> Nombre=Nombre;
}


string Personal::getPuesto(){

return Puesto;
}

void Personal::setPuesto(string Puesto){
this->Puesto =Puesto;
}


