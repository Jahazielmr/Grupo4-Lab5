#include "Chef.h"

Chef::Chef(string Nombre,string ID,string NumeroCel,int Edad,string Username,string Contra, int AContratacion,double Sueldo, string PlatilloFavorito,int RantingChef){
    this->PlatilloFavorito=PlatilloFavorito;
    this->RantingChef=RantingChef;
    this->AContratacion=AContratacion;
    this->Sueldo=Sueldo;
    this->Nombre=Nombre;
    this->ID=ID;
    setNumeroCel(NumeroCel);
    setEdad(Edad);
    this->Username=Username;
    this->Contra=Contra;
}
Chef::Chef(){

}
void Chef::setPlatilloFavorito(string PlatilloFavorito){
   this-> PlatilloFavorito=PlatilloFavorito;
}

string Chef::getPlatilloFavorito(){
   return PlatilloFavorito;
}

void Chef::setRantingChef(int RantingChef){
   this-> RantingChef=RantingChef;
}

int Chef::getRantingChef(){
   return RantingChef;
}
