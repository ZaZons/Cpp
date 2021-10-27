#include <iostream>

using namespace std;

int main()
{
	//Primeiro exemplo
	int num{};
	cout << "Introduza um inteiro positivo - iniciar a contagem decrescente";
	cin >> num;

	while(num > 0)
	{
		cout << num << endl;
		--num;
	}	
	cout << "Arranque!" << endl;

	//Segundo exemplo
	int num_dois{};
	cout << "Introduza um inteiro positivo, para contar ate esse numero";
	cin >> num_dois;

	int i{1};

	while (num_dois >= i)
	{
		cout << i << endl;
		i++;
	}

	//Terceiro exemplo
	int num_tres{};

	cout << "Introduza um inteiro menor que 100: ";
	cin >> num_tres;

	while (num_tres >= 100)
	{
		cout << "Introduza um inteiro menor que 100: ";
		cin >> num_tres;
	}

	cout << "Obrigado" << endl;

	//Quarto exemplo
	bool feito{false};
	int num_quatro{0};

	while (!feito)
	{
		cout << "Introduza um numero entre 1 e 5: ";
		cin >> num_quatro;

		if(num_quatro < 1 || num_quatro > 5)
			cout << "Fora do intervalo. Tente de novo: " << endl;
		else
		{
			cout << "Obrigado!" << endl;
			feito = true;
		}
	}
}