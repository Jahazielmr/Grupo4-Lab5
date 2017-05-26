#pragma once

#include "Personal.h"
#include<string>
using namespace std;

class Lavaplato : public Personal{

	protected:

		int Nivel;

	public:

		Lavaplato(int, string, string, string, int, string, string, int, double);
		int getNivel();
		void setNivel(int);


};

