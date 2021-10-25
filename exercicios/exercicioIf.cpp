#include <iostream>

using namespace std;

int main()
{
	const int idadeMinima{18};

	cout << "Introduza a sua idade: ";
	
	int x{};
	cin >> x;

	if (x >= idadeMinima) cout << "Sim, pode tirar a carta";
}