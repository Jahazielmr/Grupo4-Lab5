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

void Personal::escribir(ofstream& file){
    Usuario::escribir(file);
    file<<"Año Contratacion:"<<AContratacion<<", Sueldo: "<<Sueldo<<endl;  
}

void Personal::setAContratacion(int AContratacion){
   this-> AContratacion=AContratacion;
}

int Personal::getAContratacion(){
   return AContratacion;
}

void Personal::setSueldo(double Sueldo){
   this-> Sueldo=Sueldo;
}

double Personal::getSueldo(){
   return Sueldo;
}

