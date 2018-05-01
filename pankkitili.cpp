#include <iostream>
#include <string>
#include "pankkitili.h"

using namespace std;

//muodostin

Pankkitili::Pankkitili(std::string tilinumero_par, std::string tilinOmistaja_par, double saldo_par){
	std::cout <<"\nPankkitilin numero:	" << tilinumero_par <<"\nTilin omistajan nimi:	" <<tilinOmistaja_par<< "\nja saldo:		" <<saldo_par<< std::endl;
	
	tilinumero = tilinumero_par;
	tilinOmistaja = tilinOmistaja_par;
	saldo = saldo_par;	
}

//oletusmuodostin

	Pankkitili::Pankkitili(){
	tilinumero = "Ei nimetty";
	tilinOmistaja = "Ei nimetty";
	saldo = 0;
	std::cout<<"Oletusmuodostin toimii" <<std::endl;	
}	

//saantimetodit
void Pankkitili::setTilinumero(std::string tilinumero_par){
	tilinumero = tilinumero_par;
}

void Pankkitili::setTilinOmistaja(std::string tilinOmistaja_par){
	tilinOmistaja = tilinOmistaja_par;
}

void Pankkitili::setSaldo(double saldo_par){
	saldo = saldo_par;
}

//asetusmetodit
std::string Pankkitili::getTilinumero() const{
	return tilinumero;
}

std::string Pankkitili::getTilinOmistaja() const{
	return tilinOmistaja;
}

double Pankkitili::getSaldo() const{
	return saldo;
}

//muutmetodit

void Pankkitili::nostaTililta(){
	std::cout<<"Syota noston maara: ";
	while (1) {
    if (cin >> nostonMaara) {
        break;
    } else {
        cout << "Syotetty arvo ei kelpaa, syota kelvollinen luku!" << endl;
        cin.clear();
        while (cin.get() != '\n');
    }
}	
	if (nostonMaara > saldo) {
		std::cout<<"\nTililla ei tarpeeksi rahaa!"<< endl;
	} else { 
	 	saldo = saldo-nostonMaara; 
	 }
}

void Pankkitili::talletaTilille(){
	std::cout<<"\nSyota talletettava maara: ";
while (1) {
    if (cin >> talletettavaMaara) {
        break;
    } else {
        cout << "Syotetty arvo ei kelpaa, syota kelvollinen luku!" << endl;
        cin.clear();
        while (cin.get() != '\n');
    }
}

	saldo = saldo+talletettavaMaara;
}

void Pankkitili::tulostus(){
	std::cout<<"\nTilinumero:	"<<tilinumero<<"\nTilin omistaja:	"<<tilinOmistaja<<"\nSaldo:		"<<saldo<<std::endl;

}




//hajotin
Pankkitili::~Pankkitili(){
	
}
















