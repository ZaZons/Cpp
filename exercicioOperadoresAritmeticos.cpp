#include <iostream>

using namespace std;

int main()
{
	int numOriginal{0};
	
	cout << "Introduza um numero inteiro" << endl;
	cin >> numOriginal;

	int numero{numOriginal};

	numero *= 3;
	numero += 18;
	numero -= 3;
	numero /= 2;
	numero -= numOriginal;
	numero %= 3;

	cout << "Resultado final: " << numero << endl;
}