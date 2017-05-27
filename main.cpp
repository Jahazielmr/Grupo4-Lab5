#include "Usuario.h"
#include "Personal.h"
#include "Cliente.h"
#include "Administrador.h"
#include "Lavaplato.h"
#include "Mesero.h"
#include "Chef.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Usuario* meseroAgregar();
Usuario* lavaplatoAgregar();
Usuario* chefAgregar();
double prom(vector<Usuario*>);
string menor(vector <Usuario*>);
string mayor(vector <Usuario*>);

int main(){

		int option;
        int op;
     	int option2;
        vector<Usuario*> usuarios;
		char resp ='s';

        while(resp=='s'||resp=='S'){
                
                cout <<"Menu"<<endl;
                cout <<"1-Ingresar como Administrador"<<endl;
                cout <<"2-Ingresar como usuario normal"<<endl;
                cout <<"3-Agregar Cliente"<<endl;
                cout <<"4-Salir"<<endl;
                cin>> option;
                switch (option){
                		case 1:{
                        		//Ingresar como admin
                        		Usuario* temp = new Administrador(50,50,"Nasralla","123456566","919219829",23,"Nasralla","123",1920,123456);
                        		
                        		string user, pass;

                        		cout<<"Ingrese Usuario: "<<endl;
                        		cin>>user;
                        		cout<<"Ingrese Contraseña:"<<endl;
                        		cin>>pass;

                        		if((temp->getUsername()==user)&&(temp->getContra()==pass)){
                        			 cout<<"Bienvenido Administrador"<<endl;
                        			 cout<<"Menu"<<endl;
                					 cout<<"1-Agregar"<<endl;
                					 cout<<"2-Eliminar"<<endl;
                					 cout<<"3-Aumentar/decrementar sueldo"<<endl;
                					 cout<<"4-Buscar empleados menor sueldo"<<endl;
                					 cout<<"5-Buscar empleados de mayor sueldo"<<endl;
                					 cout<<"6-Promedio de sueldo de empleados"<<endl;
                					 cin>>option2;
                					 switch (option2){

                					 	case 1:{
                					 		//Agregar 
                					 		int op;
                					 		cout<<"1-Agregar Meseros"<<endl;
                               	 			cout<<"2-Agregar Lavaplatos"<<endl;
                                			cout<<"3-Agregar Chef"<<endl;
                                			cin>>op;

                                			switch(op){
                                        		case 1:{

                                        			//Agregar Meseros
                                        			usuarios.push_back(meseroAgregar());


                                        			break;
                                        		}

                                        		case 2:{
                                        			//Agregar lavaplatos
                                        			usuarios.push_back(lavaplatoAgregar());

                                        		}

                                        		case 3:{
                                        			//Agregar chefs
                                        			usuarios.push_back(chefAgregar());
                                        		}

                                        	}


                					 		break;
   	             					 	}

   	             					 	case 2:{
   	             					 		//Elimina ABY 

   	             					 		break;
   	             					 	}

   	             					 	case 3:{
   	             					 		//AUMENTAR DECREMENTAR


   	             					 		break;
   	             					 	}

   	             					 	case 4:{
   	             					 		//BUSCAR MENOR SUELDO
   	             					 		/*
											string aux;

	 										for(int i=0;i<usuarios.size();i++){
                                                
  	     										int menor=100000000000000000;	

         										if(usuarios[i].getSueldo()<menor){

            										menor = usuarios[i].getSueldo();

         										}

    										}

    										for (int i = 0; i <usuarios.size(); ++i){
        										if(usuarios[i].getSueldo()==menor){
               											aux+= cout<<"Usuarios con menor sueldo son: "<<usuarios[i].getNombre();

            									}
                                				
    										}

    										cout<< aux;

   	           								*/

   	             					 		break;
   	             					 	}

   	             					 	case 5:{
   	             					 		//BUSCAR MAYOR SUELDO
   	             					 		/*
   	             					 		string aux;

											for(int i=0;i<usuarios.size();i++){
                                                
           									int mayor=0;	

           										if(usuarios[i].getSueldo()>mayor){

             										mayor = usuarios[i].getSueldo();

            									}
    										}


    										for (int i = 0; i < ususarios.size(); ++i){
         	 									if(usuarios[i].getSueldo()==mayor){
               										aux+= cout<<"Usuarios con mayor sueldo son: "<<usuarios[i].getNombre();

            									}
                                				
    										}


    										cout<<aux;
											*/
    										break;
    										
   	             					 	}

   	             					 	case 6:{
   	             					 		//PROMEDIO DE SUELDO
   	             					 		
   	             					 		/*int acum;
   											int cont;
   											double prom;
   											for (int i = 0; i < usuarios.size(); ++i){
   												if(reinterpret_cast<Chef*>(usuarios[i])){
   												             					 			
   	        										acum+= usuarios[i].getSueldo;
   	        										cont+=1;
   	    										}

   											}

   											for (int i = 0; i < usuarios.size(); ++i){
   													if(reinterpret_cast<Mesero*>(usuarios[i])){
   												             					 			
   	        											acum+= usuarios[i].getSueldo;
   	        											cont+=1;
   	    											}

   											}

   											for (int i = 0; i < usuarios.size(); ++i){
   												if(reinterpret_cast<Lavaplato*>(usuarios[i])){
   												             					 			
   	        										acum+= usuarios[i].getSueldo;
   	        										cont+=1;
   	  											}

   											}

   											prom= acum/cont;

   											cout <<prom;
											*/
   											break;
   	             					 	}

                					 }

                				} else{
                					cout <<"No es un Administrador"<<endl;
                				}
								
						break;
						}


						case 2:{
							//Usuarios


						}

						case 3:{
							//Agregar Clientes

							string Nombre;
							string ID;
							string NumeroCel;
							int Edad;
							string Username;
							string Contra;
							string Direccion;
							int Estrellas;

							cout<< " Ingrese Nombre:  " ;
							cin>>Nombre ;
							cout<< " Ingrese ID:  " ;
							cin>>ID ;
							cout<< " Ingrese NumeroCel:  " ;
							cin>>NumeroCel ;
							cout<< " Ingrese Edad:  " ;
							cin>>Edad ;
							cout<< " Ingrese Username:  " ;
							cin>>Username ;
							cout<< " Ingrese Contra:  " ;
							cin>>Contra ;
							cout<< " Ingrese Direccion:  " ;
							cin>>Direccion ;
							cout<< " Ingrese Estrellas:  " ;
							cin>>Estrellas ;

							Usuario* temp = new  Cliente(Nombre, ID, NumeroCel, Edad, Username, Contra, Direccion, Estrellas);
							usuarios.push_back(temp);


						}

						case 4:{
								//Salir y guardar en TXT
							for(int i=0;i<usuarios.size();i++){

								Cliente* cliente= reinterpret_cast<Cliente*>(usuarios[i]);
								cliente->guardarTXT();

								Mesero* mesero= reinterpret_cast<Mesero*>(usuarios[i]);
								mesero->guardarTXT();	

								Chef* chef= reinterpret_cast<Chef*>(usuarios[i]);
								chef->guardarTXT();	

								Lavaplato* lavaplato= reinterpret_cast<Lavaplato*>(usuarios[i]);
								lavaplato->guardarTXT();

							}


							break;


						}
				}

			cout <<"Desea continuar[s/n]"<<endl;
			cin >>resp;

	}

	
return 0;	
}





Usuario* meseroAgregar(){
	string Nombre;
	string ID;
	string NumeroCel;
	int Edad;
	string Username;
	string Contra;
	int AContratacion ;
	double Sueldo;
	string Platillos;

	cout<< " Ingrese Nombre:  " ;
	cin>> Nombre ;
	cout<< " Ingrese ID:  " ;
	cin>> ID ;
	cout<< " Ingrese NumeroCel:  " ;
	cin>> NumeroCel ;
	cout<< " Ingrese Edad:  " ;
	cin>> Edad ;
	cout<< " Ingrese Username:  " ;
	cin>> Username ;
	cout<< " Ingrese Contra:  " ;
	cin>> Contra ;
	cout<< " Ingrese Acontratacion :  " ;
	cin>> AContratacion  ;
	cout<< " Ingrese Sueldo:  " ;
	cin>> Sueldo ;
	cout<< " Ingrese Platillos:  " ;
	cin>> Platillos ;


	Usuario* temp = new Mesero(Nombre, ID, NumeroCel, Edad, Username, Contra, AContratacion , Sueldo, Platillos);

	return temp;


}

Usuario* lavaplatoAgregar(){

	int Nivel;
	string Nombre;
	string ID;
	string NumeroCel;
	int Edad;
	string Username;
	string Contra;
	int AContratacion;
	double Sueldo;

	cout<< " Ingrese Nivel:  " ;
	cin>> Nivel;
	cout<< " Ingrese Nombre:  " ;	
	cin>> Nombre;
	cout<< " Ingrese ID:  " ;
	cin>> ID;
	cout<< " Ingrese NumeroCel:  " ;
	cin>> NumeroCel;
	cout<< " Ingrese Edad:  " ;
	cin>> Edad;
	cout<< " Ingrese Username:  " ;
	cin>> Username;
	cout<< " Ingrese Contra:  " ;
	cin>> Contra;
	cout<< " Ingrese AContratacion:  " ;
	cin>> AContratacion;
	cout<< " Ingrese Sueldo:  " ;
	cin>> Sueldo;

	Usuario* temp = new Lavaplato(Nivel, Nombre, ID, NumeroCel, Edad, Username, Contra, AContratacion, Sueldo);

	return temp;

}

Usuario* chefAgregar(){


		string Nombre;
		string ID;
		string NumeroCel;
		int Edad;
		string Username;
		string Contra;
		int AContratacion;
		double Sueldo;
		string PlatilloFavorito;
		int RantingChef;

		cout<< " Ingrese Nombre:  " ;
		cin>> Nombre ;
		cout<< " Ingrese ID:  " ;
		cin>> ID ;
		cout<< " Ingrese NumeroCel:  " ;
		cin>> NumeroCel ;
		cout<< " Ingrese Edad:  " ;
		cin>> Edad ;
		cout<< " Ingrese Username:  " ;
		cin>> Username ;
		cout<< " Ingrese Contra:  " ;
		cin>> Contra ;
		cout<< " Ingrese AContratacion:  " ;
		cin>> AContratacion ;
		cout<< " Ingrese Sueldo:  " ;
		cin>> Sueldo ;
		cout<< " Ingrese PlatilloFavorito:  " ;
		cin>> PlatilloFavorito ;
		cout<< " Ingrese RantingChef:  " ;
		cin>> RantingChef ;

		Usuario* temp = new Chef(Nombre, ID, NumeroCel, Edad, Username, Contra, AContratacion, Sueldo, PlatilloFavorito, RantingChef);
		


}