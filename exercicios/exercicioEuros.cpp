#include <iostream>

using namespace std;

int main()
{
	const double valorUSD_por_EUR{1.11};
	int eur{0};

	cout << "Bem vindo ao conversor de EUR para USD" << endl;
	cout << "Introduza o valor em EUR" << endl;

	cin >> eur;

	cout << eur << " euros e equivalente a " << eur * valorUSD_por_EUR << " dolares" << endl;
}