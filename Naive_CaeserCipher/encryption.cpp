#include "encryption.h"
#include <fstream>
#include <cctype>
using namespace std;

bool performCaesarCipher(string& content, bool encrypt)
{
	int shift;
	if(encrypt == true)
	{
		shift = 3;
	}
	else
	{
		shift = -3;
	}
	for(char& ch : content)
	{
		if(isalpha(ch))
		{
			char base = isupper(ch) ? 'A' : 'a'; //ternary operator '?'
			ch = ((ch - base + shift + 26) % 26) + base;
		}
	}
	return true;
}
bool encryptFile(const string& filename, bool encrypt)
{
	ifstream infile(filename);
	if(!infile)
	{
		return false;
	}

	//Read the contents of the file

	string content((istreambuf_iterator<char>(infile)), {}); //just syntax dont get feared..
	infile.close();
	if(performCaesarCipher(content,encrypt))
	{
		//Create an output file and writing the modified content into it
		ofstream outfile(encrypt ? "encrypted_"  + filename : "decrypted_" + filename);
		if(!outfile)
		{
			return false;
		}
		outfile << content;
		outfile.close();
		return true;
	}
	return true;
}