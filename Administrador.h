
#include "Personal.h"
#pragma once

#include<string>
using namespace std;
class Administrador : public Personal{

	protected:
		int Contratado;
		int Despedido;

	public:

		Administrador(int, int, string, string, string, int, string, string, int, double);
		int getContratado();
		void setContratado(int Contratado);
		int getDespedido();
		void setDespedido(int Despedido);


};

