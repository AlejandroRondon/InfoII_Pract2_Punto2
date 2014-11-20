#include "civicCard.h"
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;
CivicCard::CivicCard(){
	name = " ";
	dni =  " ";
	id_card = 0;
	balance = 0;
	status = true;
}
CivicCard::CivicCard(string name,string dni,int id_card, float balance,bool status){
	this->name = name;
	this->dni =  dni;
	this->id_card = id_card;
	this->balance = balance;
	this->status = status;
}
void CivicCard::printUser(void){
	if(status == true){	
		cout << "Name: " << name << "\tDNI: " << dni << "\tID Card: " << id_card << "\tbalance: " << balance << endl;
	}else{
		cout << "Card disable" <<endl;
	}
}
float amount;
void CivicCard::addBalance(){
	if(status == true){
		cout << "Enter the amount to transfer" << endl;
		cin >> amount;	
		if(amount < 0){
			cout << "error: imposible transaction, negative value\n";	
		}else{
			balance += amount;	
			cout << "succesfull transaction\n";
			cout << "the new balance is: "<< balance << endl;
			
		}
	}else{
		cout << "Card disable" <<endl;
	}
}
void CivicCard::reduceBalance(){
	if(status == true){	
		cout << "Enter the amount to retire" << endl;
		cin >> amount;
		if((amount < 0) || (amount > balance)){
			cout << "error: imposible transaction, your balance is " << balance << endl ;	
		}else{
	
			balance -= amount;	
			cout << "succesfull transaction\n";
			cout << "the new balance is: "<< balance << endl;
			
		}
	}else{
		cout << "Card disable" <<endl;
	}
}
void CivicCard::enableCard(bool status){
	this->status = status;
}

bool CivicCard::getStatus(void){
	return status;
}

void CivicCard::updateInfo(string name,string dni,int id_card, float balance,bool status){
	if(status == true){
	this->name = name;
	this->dni =  dni;
	this->id_card = id_card;
	this->balance = balance;
	this->status = status;
	}else{
		cout << "Card disable, imposible update" <<endl;
	}
}

void CivicCard::updateInfo(string name,string dni,int id_card){
	if(status == true){	
	this->name = name;
	this->dni =  dni;
	this->id_card = id_card;
	}else{
		cout << "Card disable, imposible update" <<endl;
	}
}




	
