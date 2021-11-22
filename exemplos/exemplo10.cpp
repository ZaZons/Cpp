#include <iostream>

#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//                         1         2         3         4         5
	//               012345678901234567890123456789012345678901234567890123
	string alfabeto{"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"},
		key		   {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompaciasr"},
		msg{},
		msgDesencriptada{},
		msgEncriptada{};

	cout << "Introduza a mensagem a encriptar: ";
	getline(cin, msg);

	for(char c : msg)
	{
		size_t pos = alfabeto.find(c);
		
		if(pos != string::npos)
		{
			char newChar = key.at(pos);
			msgEncriptada += newChar;
		}
		else
		{
			msgEncriptada += c;
		}
	}
	
	for(char c : msgEncriptada)
	{
		size_t pos = key.find(c);

		if(pos != string::npos)
		{
			char newChar = alfabeto.at(pos);
			msgDesencriptada += newChar;
		}
		else
		{
			msgDesencriptada += c;
		}
	}

	size_t pos;

	for (char c : msg)
		(pos = alfabeto.find(c)) != string::npos ? msgEncriptada += key.at(pos) : msgEncriptada += c;
	
	cout << "Mensagem encriptada: " << msgEncriptada << endl;
	cout << "Mensagem desencriptada: " << msgDesencriptada;
}