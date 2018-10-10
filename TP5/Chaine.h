#ifndef Chaine_H
#define Chaine_H
#include <string>
using namespace std;

Class Chaine {
public:
	Chaine();
	Chaine(string, string, string);

	string getChaineName();
	string getChaineCodePostal();
	string getChaineAddress();

private:
	string chaineName;
	string chaineCodePostal;
	string chaineAddress;
}
#endif