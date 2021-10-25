#include <iostream>

using namespace std;

int main()
{
	float a{}, b{}, maior{};
	char x{};
	cout << "Introduza dois numeros" << endl;
	cin >> a >> b;

	if (a > b)
	{
		x = 'a';
		maior = a;
	}
	else if (b > a)
	{
		x = 'b';
		maior = b;
	}
	cout << "O maior valor entre 'a' e 'b' corresponde a '" << x << "' que tem o valor " << maior << endl;
}