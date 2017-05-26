#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef MESERO_H
#define MESERO_H

class Mesero:public Personal{
    protected:
        vector <string> Platillos;
    public:
        Mesero(string,string,string,int,string,string, int,double, string);
        Mesero();
        string getPlatillos();
        void setPlatillos(vector <string>);

        void entregar(vector <string>);

};

#endif