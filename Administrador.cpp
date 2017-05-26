#include "Administrador.h"

Administrador::Administrador( int Contratado, int Despedido, string Nombre, string ID, string NumeroCel, int Edad, string Username, string Contra, int AContratacion, double Sueldo) : Personal(Nombre, ID, NumeroCel, Edad, Username, Contra, AContratacion, Sueldo) {
	this-> Contratado=Contratado;
	this-> Despedido=Despedido;
	this->Nombre=Nombre;
	this-> ID = ID;
	this-> NumeroCel=NumeroCel;
	this-> Edad=Edad;
	this->Username=Username;
	this->Contra=Contra;
	this->AContratacion=AContratacion;
	this->Sueldo=Sueldo;
}


int Administrador::getContratado(){

return Contratado;
}

void Administrador::setContratado(int Contratado){
	this->Contratado =Contratado;
}

int Administrador::getDespedido(){

return Despedido;
}

void Administrador::setDespedido(int Despedido){
	this->Despedido =Despedido;
}

