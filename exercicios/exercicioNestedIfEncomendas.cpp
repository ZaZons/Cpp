#include <iostream>

using namespace std;

int main()
{
	const float custoBase{5.5f};
	const int limite{25}, limiteVolume1{3125}, limiteVolume2{625};
	int comprimento{}, largura{}, altura{};
	float precoFinal{custoBase}, sobretaxa1{.25}, sobretaxa2{.1};

	cout << "Insira as dimensoes do pacote da encomenda (comprimento, largura e altura): ";
	cin >> comprimento >> largura >> altura;

	if (comprimento > limite || largura > limite || altura > limite)
	{
		cout << "Medidas invalidas, a encomenda n pode ter dimensoes maior do que " << limite;
		return 0;
	}

	int volume{comprimento * largura * altura};

	if (volume > limiteVolume2)
	{
		if (volume > limiteVolume1)
		{
			cout << "O seu pacote tem um volume maior do que " << limiteVolume1 << endl;
			precoFinal += custoBase * sobretaxa1;
		}
		else
		{	
			cout << "O seu pacote tem um volume maior do que " << limiteVolume2 << endl;
			precoFinal = custoBase * sobretaxa2;
		}
		cout << "O que fara com que seja aplicada uma sobretaxa" << endl;
	}

	cout << "Preco final: " << precoFinal;
}