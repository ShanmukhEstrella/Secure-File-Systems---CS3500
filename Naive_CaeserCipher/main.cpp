#include<iostream>
#include "encryption.h"
using namespace std;
int main()
{
	string filename;
	char mode;
	cout<<"Hi User, Enter the filename : ";
	getline(cin>>ws, filename);
	cout<<"Encrypt(e or E) or Decrypt(d or D) the file..";
	cin>>mode;
	if(mode == 'e' || mode == 'E')
	{
		if(encryptFile(filename,true))
		{
			cout<<"Encryption completed successfully..."<<endl;
		}
		else
		{
			cerr << "Error: Unable to perform encryption..."<<endl;
		}
	}
	else if(mode == 'd' || mode == 'D')
	{
		if(encryptFile(filename, false))
		{
			cout<<"Decryption completed successfully..." <<endl;
		}
		else
		{
			cerr << "Error: Unable to perform decryption..."<<endl;
		}
	}
	else
	{
		cerr<<"Error: Invalid mode selection..."<<endl;
	}
	return 0;
}
