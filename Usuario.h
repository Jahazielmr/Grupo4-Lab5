#include <iostream>
#include <string>
#include <sstream>
#include <fstream> 

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H
class Usuario{
    protected:
        string Nombre;
        string ID;
        string NumeroCel;
        int Edad;
        string Username;
        string Contra;
    public:
        Usuario(string,string,string,int,string,string);
        Usuario();
        string getNombre();
        void setNombre(string);

        string getID();
        void setID(string);

        string getNumeroCel();
        void setNumeroCel(string);

        int getEdad();
        void setEdad(int);

        string getUsername();
        void setUsername(string);

        string getContra();
        void setContra(string);

        void guardarTXT();
        virtual void escribir(ofstream& file);

};
#endif
