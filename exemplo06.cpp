#include <iostream>

using namespace std;

int main()
{
	const int precoCarro{ 25 };
	const int precoCarrinha{ 30 };
	const float imposto{ .23 };

	int nCarros{ 0 };
	int nCarrinhas{ 0 };

	cout << "Qual o numero de carros que pretende limpar??? ";
	cin >> nCarros;

	cout << "Qual o numero de carrinhas que pretende limpar??? ";
	cin >> nCarrinhas;

	int subTotal{ precoCarro * nCarros + precoCarrinha * nCarrinhas };
	float impostoTotal{ subTotal * imposto };
	float total{ subTotal + impostoTotal };

	cout << "Orcamento para limpeza de carros:" << endl;
	cout << "Numero de carros: " << nCarros<< endl;
	cout << "Numero de carrinhas: " << nCarrinhas << endl;
	cout << "Preco por carro: " << precoCarro << endl;
	cout << "Preco por carro: " << precoCarrinha << endl;
	cout << "Custo total: " << subTotal << endl;
	cout << "Impostos: " << impostoTotal << endl;

	cout << "=============================" << endl;

	cout << "Total do orcamento: " << total << endl;
	cout << "Expira em 30 dias" << endl;
	
}