#include <iostream>

using namespace std;

int main()
{
	int num1{}, num2{};

	cout << "Introduza dois inteiros separados por um espaco: ";
	cin >> num1 >> num2;

	if (num1 != num2)
	{
		cout << "Maior: " << ((num1 > num2) ? num1 : num2) << endl;
		cout << "Menor: " << ((num1 < num2) ? num1 : num2) << endl;
	}
	else
	{
		cout << "Os numeros sao iguais" << endl;
	}
}