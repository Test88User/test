#include <iostream>
#include <string>
#include "pankkitili.h"
#include "pankkitili.cpp"



using namespace std;

int main (){
	
string nimi;
string nro;
double sald;
int valinta;	

	
cout<<"Syota tilinumerosi: ";
getline (cin, nro);

cout<<"Syota nimesi: ";
getline (cin, nimi);

cout<<"Syota saldosi: ";
while (1) {
    if (cin >> sald) {
        break;
    } else {
        cout << "Syotetty arvo ei kelpaa, syota kelvollinen luku!" << endl;
        cin.clear();
        while (cin.get() != '\n');
    }
}


Pankkitili p1 (nro, nimi, sald);
for (;;){
cout<<"\nPaina 1 jos haluat tallettaa tilille rahaa.\n";
cout<<"Paina 2 jos haluat nostaa tililta rahaa.\n";
cout<<"Paina 3 jos haluat tulostaa tiedot nakyviin.\n";
cout<<"Syota jotain muuta, jos haluat lopettaa ohjelman.\n";
cin>> valinta;

switch (valinta){
	
	case 1:
		p1.talletaTilille();
		break;
	case 2:
		p1.nostaTililta();
		break;
	case 3:
		p1.tulostus();
		break;
	default:
		cout<<"Syotetty arvo ei kelpaa, suljetaan ohjelma.";
		exit(0);
		break;
}
}
}

