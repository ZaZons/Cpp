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