#ifndef CIVICCARD_H
#define CIVICCARD_H
#include <string>
#include <cstdio>
#include <iostream>

using namespace std;
class CivicCard
{

private:
	string name;
	string dni;
	int id_card;
	float balance;
	bool	status;
	
public:
	CivicCard();
	CivicCard(string, string, int , float, bool );
	void printUser(void);
	void addBalance();
	void reduceBalance();
	void enableCard(bool);
	bool getStatus(void);
	void updateInfo(string, string, int , float, bool );
	void updateInfo(string ,string ,int );
	
};

#endif // TEMPERATURE_H

/*
2. 2 pt. Defina una clase para representar la Tarjeta C ́ıvica del Metro de Medell ́ın. Los atributos
(miembros) de la clase deben incluir el nombre del propietario de la tarjeta, su c ́edula de ciu-
dadan ́ıa, el n ́umero de la tarjeta y el saldo actual. Los m ́etodos de la clase (funciones miembro)
deben permitir realizar lo siguiente:
a) Crear un objeto de la clase e inicializarlo con valores por defecto.
b) Imprimir en la terminal los atributos del objeto (nombre y c ́edula del propietario, n ́umero
de la tarjeta, saldo actual).
c) Recargar una cantidad de dinero.
d) Descontar un viaje del saldo disponible ($1650).
e) Implemente un m ́etodo que permita inhabilitar la tarjeta, es decir, que impida que la tarjeta
sea usada para recargar o retirar dinero de ella en caso de p ́erdida.
Escriba un programa que pruebe, mediante un men ́u, todos los m ́etodos de la clase. Tenga en
cuenta verificar aspectos de seguridad como retirar m ́as de la cantidad de saldo disponible o
retirar saldo negativo, etc.
*/
