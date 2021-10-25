#include <iostream>

using namespace std;

int main()
{
	enum Direcao
	{
		esquerda, direita, cima, baixo
	};

	Direcao irPara{esquerda};

	switch (irPara)
	{
		case esquerda:
			cout << "Indo para a esquerda" << endl;
			break;

		case direita:
			cout << "Indo para a direita" << endl;
			break;

		default:
			cout << "OK" << endl;
	}
}