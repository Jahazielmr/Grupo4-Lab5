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
