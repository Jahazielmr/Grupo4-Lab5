#include "Usuario.h"
#include "Personal.h"
#include "Cliente.h"
#include "Administrador"
#include "Lavaplato.h"
#include "Mesero.h"
#include "Chef.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){

		int option;
        int op;
     	
        vector<Usuario*> usuarios;
		char resp ='s';

        while(resp=='s'||resp=='S'){
                
                cout <<"Menu"<<endl;
                cout <<"1-Login"<<endl;
                cout <<"2-Salir"<<endl;
                cin>> option;
                switch (option){

                        case 1:{
                        		//Agregar
                        		Usuarios* temp = new Administrador(50,50,"Nasralla",23456789,995835152,23,"Nasralla","lluvia",1980,200000000);
                        		Usuarios* temp = new Administrador(50,50,"OSCARWILDE",23456789,995835152,23,"Nasralla","lluvia",1980,200000000);

								usuarios.push_back(temp);

								cout<<usuarios.size()<<endl;
						break;
						}
				}
	}
	
return 0;	
}

