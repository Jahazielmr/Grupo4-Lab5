main: main.o Usuario.o Cliente.o Personal.o Administrador.o Chef.o Lavaplato.o Mesero.o 
	g++ main.o Usuario.o Cliente.o Personal.o Administrador.o Chef.o Lavaplato.o Mesero.o -o main

main.o: main.cpp Usuario.h Cliente.h Personal.h Administrador.h Chef.h Lavaplato.h Mesero.h 
	g++ -c main.cpp
 
Usuario.o: Usuario.cpp Usuario.h 
	g++ -c Usuario.cpp 
 
Cliente.o:  Cliente.h Cliente.cpp Usuario.h 
	g++ -c Cliente.cpp 
 
Personal.o:  Personal.h Personal.cpp Usuario.h 
	g++ -c Personal.cpp 
 
Administrador.o:	Administrador.h Administrador.cpp Usuario.h 
	g++ -c Administrador.cpp 
 
Chef.o:  Chef.h Chef.cpp Personal.h 
	g++ -c Chef.cpp 
 
Lavaplato.o:  Lavaplato.h Lavaplato.cpp Personal.h 
	g++ -c Lavaplato.cpp 
 
Mesero.o:  Mesero.h Mesero.cpp Personal.h 
	g++ -c Mesero.cpp 
