#include <iostream>

using namespace std;

int main()
{
	int larguraDivisao{ 0 };
	int comprimentoDivisao{ 0 };

	cout << "Introduza a largura: ";
	cin >> larguraDivisao;

	cout << "Introduza o comprimento: ";
	cin >> comprimentoDivisao;

	cout << "A area e: " << larguraDivisao * comprimentoDivisao << endl;
}