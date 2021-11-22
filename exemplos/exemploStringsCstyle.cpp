#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	char apelido[20] {};
	char nome[20] {};
	char nomeCompleto[60] {};
	char temp[60] {};

	cout << nome << endl;

	cout << "Por favor, introduza o seu primeiro nome: ";
	cin >> nome;

	cout << "Por favor, introduza o seu apelido: ";
	cin >> apelido;
	
	cout << "-------------------------------------" << endl;

	cout << "Ola " << nome << ". O seu primeiro nome tem " << strlen(nome) << " caracteres";
	cout << " e o seu apelido, " << apelido << ", tem " << strlen(apelido) << " caracteres" << endl;

	strcpy_s(nomeCompleto, nome);
	strcat_s(nomeCompleto, " ");
	strcat_s(nomeCompleto, apelido);

	cout << "O seu nome completo e " << nomeCompleto << endl;

	cout << "-------------------------------------" << endl;

	cout << "Por favor, introduza o seu nome completo: ";
	cin >> nomeCompleto;

	cout << "O seu nome completo e " << nomeCompleto << endl;

	cout << "-------------------------------------" << endl;

	cout << "Por favor, introduza o seu nome completo: ";
	cin.ignore();
	cin.getline(nomeCompleto, 60);

	cout << "O seu nome completo e " << nomeCompleto << endl;

	cout << "-------------------------------------" << endl;

	strcpy_s(temp, nomeCompleto);

	if (strcmp(temp, nomeCompleto) == 0)
	{
		cout << temp << " e " << nomeCompleto << " sao iguais." << endl;
	}
	else
	{
		cout << temp << " e " << nomeCompleto << " sao diferentes." << endl;
	}

	cout << "-------------------------------------" << endl;

	for (size_t i{0}; i < strlen(nomeCompleto); ++i)
	{
		if (isalpha(nomeCompleto[i]))
		{
			nomeCompleto[i] = toupper(nomeCompleto[i]);
		}
	}

	cout << "O seu nome completo e " << nomeCompleto << endl;

	cout << "-------------------------------------" << endl;

	if (strcmp(temp, nomeCompleto) == 0)
	{
		cout << temp << " e " << nomeCompleto << " sao iguais." << endl;
	}
	else
	{
		cout << temp << " e " << nomeCompleto << " sao diferentes." << endl;
	}

	cout << "-------------------------------------" << endl;

	cout << "Resultado de comparar " << temp << " e " << nomeCompleto << ": " << strcmp(temp, nomeCompleto) << endl;

	cout << "Resultado de comparar " << nomeCompleto << " e " << temp << ": " << strcmp(nomeCompleto, temp) << endl;
}