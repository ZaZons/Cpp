#include <iostream>
#include <cmath>

using namespace std;

int potencializar(int, int);

int main() {
	int base{}, potencia{};

	cout << "Introduza a base: ";
	cin >> base;
	cout << "Introduza a potencia: ";
	cin >> potencia;
	cout << potencializar(base, potencia);
}

int potencializar(int n, int p) {
	return pow(n, p);
}
