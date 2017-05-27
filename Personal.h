#include <iostream>
#include <string>
#include "Usuario.h"
#include <sstream>
#include <fstream>


using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal: public Usuario{
    protected:
        int AContratacion;
        double Sueldo;
    public:
        Personal(string,string,string,int,string,string, int,double);
        Personal();
        int getAContratacion();
        void setAContratacion(int);

        double getSueldo();
        void setSueldo(double);

        virtual void escribir(ofstream& file);

};
#endif

