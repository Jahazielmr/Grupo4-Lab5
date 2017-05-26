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
#include <typeinfo>
using namespace std;


Lavaplato* Gritar(Lavaplato*);
Lavaplato* Agradar(Lavaplato*);
bool Renunciar(Lavaplato*);
double Aumento(Lavaplato*);
int Despedir();

int main(){

		int option;
        int op;
     	
        vector<Usuario*> usuarios;
		char resp ='s';

        while(resp=='s'||resp=='S'){
                
                cout <<"Menu"<<endl;
                cout <<"1-Ingresar como Administrador"<<endl;
                cout <<"2-Ingresar como usuario normal"<<endl;
                cout <<"2-Salir"<<endl;
                cin>> option;
                switch (option){

                        case 1:{
                        		//Agregar
                        		Usuario* temp = new Administrador(50,50,"Nasralla","123456566","919219829",23,"Nasralla","123",1920,123456);
                        		

                        		if(temp->getUsername()=="Nasralla"&&temp->getContra()=="123"){
                        			 cout<<"Bienvenido Administrador"<<endl;
                        			 cout<<"Menu"<<endl;
                					 cout<<"1-Agregar"<<endl;
                					 cout<<"2-Listar"<<endl;
                					 cout<<"3-Eliminar"<<endl;
                					 cout<<"4-Modificar"<<endl;
                					 cin>> option;

                				} else{
                					cout <<"No es un Administrador"<<endl;
                				}

								
						break;
						}

						case 2:{
								//LOGIN
								int user;
								string name, pass;
								cout << "--------LOGIN USUARIOS---------\n" << endl;
								cout << "Que tipo de usuario desea ingresar?\n1.Chef\n2.Lavaplatos\n3.Mesero ";
								cin >> user;
								cout << "Ingrese nombre de Usuario: ";
								cin >> name;
								cout << "Ingrese contraseña: ";
								cin >> pass;

									switch(user){
										
										case 1: {
											int operac;
											int num;
											for(int i=0;i<usuarios.size();i++){
                                                string tipo=typeid(*usuarios.at(i)).name();
                                                
																Chef* chef= reinterpret_cast<Chef*>(usuarios[i]);

                           							if (tipo=="4Chef"){
																		if(name == (static_cast<Chef*>(usuarios[i])->getUsername()) && pass == (static_cast<Chef*>(usuarios[i])->getContra())){
																		cout << "----LOGIN CHEF----\n" << endl;
									
																		cout << "Operaciones que puede realizar:\n1.Gritarle a Lavaplatos:\n2.Agradar a Lavaplatos: ";
																		cin >> operac;
																		  for(int i=0;i<usuarios.size();i++){
                                                                tipo=typeid(*usuarios.at(i)).name();

                                                               if (tipo=="9Lavaplato"){
                                                                  Lavaplato* lavaplato= reinterpret_cast<Lavaplato*>(usuarios[i]);
                                                                  cout << i <<")- "<< static_cast<Lavaplato*>(usuarios[i])->getUsername() << endl;
                                                               }
                                                            }


																			if (operac==1){

																				cout << "-----GRITAR LAVAPLATOS----\n" << endl;
																				
																						cout << "Ingrese el lavaplato al que desea gritar: ";
																						cin >> num;
																						usuarios[num] = Gritar(static_cast<Lavaplato*>(usuarios[num]));
																			//FIN GRITAR LAVAPLATOS
																			
																			}else if(operac==2){
																					   cout << "Ingrese el lavaplato al que desea agradar: ";
                                                                  cin >> num;
                                                                  usuarios[num] = Agradar(static_cast<Lavaplato*>(usuarios[num]));

																			//FIN AGRADAR LAVAPLATOS
																			}else{
																				cout << "Opcion incorrecta" << endl;
																			}
																			
																}
                           					
														}//FIN VERIFICACION
                                			}//FIN FOR
										}//FIN USUARIO CHEF
										break;

										case 2:{
												int operac2;
												for (int i=0; i<usuarios.size(); i++){
														 string tipo2=typeid(*usuarios.at(i)).name();
                                            Lavaplato* lavaplato= reinterpret_cast<Lavaplato*>(usuarios[i]);
														 
														if (tipo2=="9Lavaplato"){
																 if(name == (static_cast<Lavaplato*>(usuarios[i])->getUsername()) && pass == (static_cast<Lavaplato*>(usuarios[i])->getContra())){
														 cout << "----LOGIN LAVAPLATO----\n" << endl;

                                                      cout << "Operaciones que puede realizar:\n1.Renunciar\n2.Pedir aumento ";
                                                     	cin >> operac2;
																			if (operac2==1){
																				if (Renunciar(static_cast<Lavaplato*>(usuarios[i]))==true)
																						 usuarios.erase(i+usuarios.begin());
																				else
																						cout << "Continua trabajando con nosotros!!" << endl;	
																										
																			}else if (operac2==2){
																				static_cast<Lavaplato*>(usuarios[i])->setSueldo(Aumento(static_cast<Lavaplato*>(usuarios[i])));
																			}
	
																					
												}//VERIFICACION IF			
												}//VERIFICACION TIPO
												}//FIN FOR, VERIFICACION

										}//FIN USUARIO LAVAPLATOS
										break;
										case 3:{
											for (int i=0;i<usuarios.size(); i++){
												string tipo3 = typeid(*usuarios.at(i)).name();
												Mesero* mesero= reinterpret_cast<Mesero*>(usuarios[i]);

												if (tipo3=="6Mesero"){
													    if(name == (static_cast<Mesero*>(usuarios[i])->getUsername()) && pass == (static_cast<Mesero*>(usuarios[i])->getContra())){
															cout << "----LOGIN MESERO----\n" << endl;

															cout << "Entrega platillo..." << " " << static_cast<Mesero*>(usuarios[i])->getPlatillos();
												}


												}//FIN IF VERIFICACION

											}//FIN FOR VERIFICACION
										//FIN USUARIO MESERO
										}
										break;




									}//Login Usuarios Empleados
							//Usuarios


						}
				}
	}
	
return 0;	
}


Lavaplato* Gritar(Lavaplato* lavaplato){
	int num;
	
	cout << "Ingrese el numero que decrementara la motivacion del lavaplatos: ";
	cin >> num;
	num = lavaplato->getNivel()-num;
	lavaplato->setNivel(num);

return lavaplato;


}

Lavaplato* Agradar(Lavaplato* lavaplato){
	int num;
	
	cout << "Ingrese el numero que aumentara la motivacion del lavaplatos: ";
	cin >> num;
	num = lavaplato->getNivel()-num;
	lavaplato->setNivel(num);

}

bool Renunciar(Lavaplato* lavaplato){
	if (lavaplato->getNivel()<26){
		cout << "Usted ha renunciado" << endl;
		return true;
	}else{
		cout << "Usted no puede renunciar, su Motivación esta alta" << endl;
		return false;
	}

}

double Aumento(Lavaplato* lavaplato){
	double nuevo;

	if (lavaplato->getNivel()>99){
		 cout << "Aumento aceptado, se le aumentara la mitad de su sueldo actual" << endl;
			nuevo = lavaplato->getSueldo() + lavaplato->getSueldo()/2;
			return nuevo;
	}else{
		cout << "Lo lamento, aumento no aceptado" << endl;
		nuevo = lavaplato->getSueldo() + 0;
		return nuevo;
	}


}
