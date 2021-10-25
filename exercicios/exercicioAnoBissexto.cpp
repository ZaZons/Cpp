#include <iostream>

using namespace std;

int main()
{
	const int verif1{400}, verif2{4}, verif3{100};
	int x{};
	
	cout << "Introduza um ano: ";
	cin >> x;

	if (x % 400 == 0)
	{
		cout << "Ano e bissexto" << endl;
	}
	else
	{
		if (x % 4 == 0 && x % 100 != 0) cout << "Ano e bissexto" << endl;
		else cout << "Ano n e bissexto" << endl;
	}
}