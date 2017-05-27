#include <iostream>
#include <string>
#include "Usuario.h"
#include <sstream>
#include <fstream>

using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H
class Cliente:public Usuario{
    protected:
        string Direccion ;
        int Estrellas;
    public:
        Cliente(string,string,string,int,string,string,string,int);
        Cliente();

        

        string getDireccion ();
        void setDireccion (string);

        int getEstrellas();
        void setEstrellas(int);

        virtual void escribir(ofstream& file);

};
#endif
