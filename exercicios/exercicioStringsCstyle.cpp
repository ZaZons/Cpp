#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	char apelido[20]{};
	char nome[20]{};
	char nomeCompleto[60]{};

	cout << nome << endl;

	cout << "Por favor, introduza o seu primeiro nome: ";
	cin >> nome;

	size_t nome_comprimento{strlen(nome)};

	cout << "Por favor, introduza o seu apelido: ";
	cin >> apelido;

	size_t apelido_comprimento{strlen(apelido)};

	cout << "-------------------------------------" << endl;

	strcpy_s(nomeCompleto, nome);
	strcat_s(nomeCompleto, " ");
	strcat_s(nomeCompleto, apelido);

	size_t nomeCompleto_comprimento{nome_comprimento + apelido_comprimento};

	cout << "Ola. O seu nome completo e " << nomeCompleto << " e tem " << nomeCompleto_comprimento << " caracteres";
	cout << ", o seu nome e " << nome << " e tem " << nome_comprimento << " caracteres";
	cout << " e o seu apelido e " << apelido << " e tem " << apelido_comprimento << " caracteres" << endl;
}