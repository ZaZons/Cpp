#include <iostream>

using namespace std;

int main()
{
	const int maiorDeIdade{18}, menorComPremissao{15};
	int idade{};
	string permissao{}, numSSValido{}, acidentado{};
	bool consentimentoParental{false}, numSS{false}, acidentes{false};

	cout << "Bem vindo, este programa testara a sua eligibilidade para destribuidor de mercadorias" << endl;

	cout << "Insira a sua idade: ";
	cin >> idade;

	if(idade < menorComPremissao)
	{
		cout << "Nao tem idade suficiente para trabalhar" << endl;
		return 0;
	}
	else if(idade > menorComPremissao && idade < maiorDeIdade)
	{
		cout << "Tem permissao dos pais? ";
		cin >> permissao;
		
		if(permissao == "nao")
		{
			cout << "Nao pode trabalhar" << endl;
			return 0;
		}
		else consentimentoParental = true;
	}
	
	cout << "Tem numero de seguranca social valido? ";
	cin >> numSSValido;

	if(numSSValido == "nao")
	{
		cout << "Nao pode trabalhar" << endl;
		return 0;
	}

	cout << "Ja teve acidentes de viacao? ";
	cin >> acidentado;

	if (acidentado == "sim")
	{
		cout << "Nao pode trabalhar" << endl;
		return 0;
	}

	cout << "Bem vindo, comeca na proxima segunda feira" << endl;
}