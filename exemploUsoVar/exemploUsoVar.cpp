// exemploUsoVar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	float imposto{ .23f };
	int numero{ 0 };
	int preco{ 30 };

	cout << "Qual o numero de carros que pretende limpar??? ";
	cin >> numero;

	int total = preco * numero;
	float impostoTotal = total * imposto;
	float precoFinal = total + impostoTotal;

	cout << "Orcamento para limpeza de carros:" << endl;
	cout << "Numero de carros: " << numero << endl;
	cout << "Preco por carro: " << preco << endl;
	cout << "Custo total: " << total << endl;
	cout << "Impostos: " << impostoTotal << endl;
	
	cout << "=============================" << endl;

	cout << "Total do orcamento: " << precoFinal << endl;
	cout << "Expira em 30 dias" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
