#include <iostream>

using namespace std;

void ordenarNumeros(int);

int main() {
	int numero{};
	cout << "Introduza um numero: ";

	cin >> numero;
	ordenarNumeros(numero);
}

void ordenarNumeros(int a) {
	cout << a << " ";

	if(a > 0)
		ordenarNumeros(a - 1);
	else
		return;

	cout << a << " ";
}
