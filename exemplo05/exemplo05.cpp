#include <iostream>

using namespace std;

int main()
{
	int dia;
	int mes;
	int ano;

	cout << "Introduza a sua data de nascimento [dd mm aaaa]" << endl;
	cin >> dia >> mes >> ano;

	cout << "A data de nascimento introduzida foi " << dia << "-" << mes << "-" << ano;
}