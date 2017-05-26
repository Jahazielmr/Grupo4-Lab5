#include "Mesero.h"

Mesero::Mesero(string Nombre,string ID,string NumeroCel,int Edad,string Username,string Contra, int AContratacion,double Sueldo, string Platillos){
    this->Platillos=Platillos;
}
Mesero::Mesero(){

}void Mesero::setPlatillos(string Platillos){
   this-> Platillos=Platillos;
}
string Mesero::getPlatillos(){
   return Platillos;
}
