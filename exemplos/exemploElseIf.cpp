#include <iostream>

using namespace std;

int main()
{
	int nota{};
	const int min{0}, max{100};

	cout << "Introduza uma nota entre " << min << " e " << max << ": ";
	cin >> nota;

	if (nota > 90) cout << "Muito Bom" << endl;
	else if (nota > 70) cout << "Bom" << endl;
	else if (nota > 50) cout << "Suficiente" << endl;
	else if (nota > 30) cout << "Insuficiente" << endl;
	else cout << "Fraco" << endl;
}