#ifndef PANKKITILI_H_INCLUDED
#define PANKKITILI_H_INCLUDED

#include <iostream>
#include <string>

class Pankkitili{

public:
	
	//muodostimet
	Pankkitili();
	Pankkitili(std::string tilinumero_par, std::string tilinOmistaja_par, double saldo_par);
	
	
	//asetusmetodi
	void setTilinumero (std::string tilinumero_par);
	void setTilinOmistaja (std::string tilinOmistaja_par);
	void setSaldo (double saldo_par);
	
	//saantimetodit
	std::string getTilinumero() const;
	std::string getTilinOmistaja() const;
	double getSaldo()const;
	
	//muut metodit
	
	void nostaTililta();
	void talletaTilille();
	void tulostus();
	
	//hajotin
	~Pankkitili();
	
	
private:
	//jäsenmuuttujat tilinumerolle std::string, tilin omistajalle std::string ja saldolle double.
	std::string tilinumero;
	std::string tilinOmistaja;
	double saldo;
	double nostonMaara;
	double talletettavaMaara;
	
	
};
#endif
