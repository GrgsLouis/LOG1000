#include "Chaine.h"
#include <iostream>
#include <fstream>

Chaine::Chaine() {
	this->chaineName = "";
	this->chaineCodePostal = "";
	this->chaineAddress = "";
}

Chaine::Chaine(string Cname, string cCode, string cAddress) {
	this->chaineName = Cname;
	this->chaineCodePostal = cCode;
	this->chaineAddress = cAddress;
}

string Chaine::getChaineName() {
	return this->chaineName;
}

string Chaine::getChaineCodePostal() {
	return this->chaineCodePostal;
}

string Chaine::getChaineAdress() {
	return this->chaineAdreess;
}