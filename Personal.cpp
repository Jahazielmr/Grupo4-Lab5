<<<<<<< HEAD
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


=======
#include "Personal.h"
#include "Usuario.h"


Personal::Personal(string Nombre,string ID,string NumeroCel,int Edad,string Username,string Contra, int AContratacion,double Sueldo){
    this->AContratacion=AContratacion;
    this->Sueldo=Sueldo;
    this->Nombre=Nombre;
    this->ID=ID;
    setNumeroCel(NumeroCel);
    setEdad(Edad);
    this->Username=Username;
    this->Contra=Contra;
}
Personal::Personal(){

}

void Personal::setAContratacion(int AContratacion){
   this-> AContratacion=AContratacion;
}

int Personal::getAContratacion(){
   return AñoContratacion;
}

void Personal::setSueldo(double Sueldo){
   this-> Sueldo=Sueldo;
}

double Personal::getSueldo(){
   return Sueldo;
}
>>>>>>> aafcbd5220c05b0bf0e780a73e76b84117f86195
