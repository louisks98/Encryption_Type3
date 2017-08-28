// Encryption_Type3.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Encryption_Type3.h"

extern "C"
{
	ENCRYPTION_TYPE3_API string Encryption(string line, int valeur)
	{
		string ligneCrypter = line;

		for (int i = 0; i < line.size(); i++)
		{
			ligneCrypter[i] = line[i] + (i + 1 + valeur);   
		}

		return ligneCrypter;
	}

}

extern "C"
{
	ENCRYPTION_TYPE3_API string Decryption(string line, int valeur)
	{
		string ligneDecrypter = line;

		for (int i = 0; i < line.size(); i++)
		{
			ligneDecrypter[i] = line[i] - (i + 1 + valeur);
		}

		return ligneDecrypter;
	}
}

