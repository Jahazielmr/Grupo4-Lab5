#include <iostream>
#include <string>
#include <vector>
#include "Personal.h"
#include <sstream>
#include <fstream>

using namespace std;

#ifndef MESERO_H
#define MESERO_H

class Mesero:public Personal{
    protected:
        string Platillos;
    public:
        Mesero(string,string,string,int,string,string, int,double, string);
        Mesero();
        string getPlatillos();
        void setPlatillos(string);

        void entregar(string);

        virtual void escribir(ofstream& file);

};

#endif
