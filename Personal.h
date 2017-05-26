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

