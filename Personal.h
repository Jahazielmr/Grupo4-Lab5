<<<<<<< HEAD
#pragma once
#include"Persona.h"
#include<string>
using namespace std;

class Personal : Persona{

	protected:
		string Puesto;

	public:
		Personal(string, string);
		string getPuesto();
		void setPuesto(string Puesto);


};

=======
#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal: public Usuario{
    protected:
        int AñoContratacion;
        double Sueldo;
    public:
        Personal(string,string,string,int,string,string, int,double);
        Personal();
        int getAñoContratacion();
        void setAñoContratacion(int);

        double getSueldo();
        void setSueldo(double);

};
#endif
>>>>>>> aafcbd5220c05b0bf0e780a73e76b84117f86195
