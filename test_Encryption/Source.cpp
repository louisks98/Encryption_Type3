#include <iostream>
#include <string>
#include "../Encryption_Type3.h"
using namespace std;

int main()
{
	string line;
	string lineCrypter;
	int valeur;

	cout << "entrer votre string : ";
	cin >> line;
	cout << endl << "entrer votre nombre d'encyption : ";
	cin >> valeur;

	lineCrypter = Encryption(line, valeur);

	cout << "string encrypter : " << lineCrypter << endl;

	cout << " string decrypter : " << Decryption(lineCrypter, valeur) << endl;
}