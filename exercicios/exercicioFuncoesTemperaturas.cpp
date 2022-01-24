#include <iostream>

#include <vector>

#include <cstring>
#include <cctype>

#include <iomanip>
#include <string>

using namespace std;

void celsiusParaFahrenheit(double);
void celsiusParaKelvin(double);

int main() {
	double c{0};

	cout << "Introduza o valor da temperatura em graus Celsius: ";
	cin >> c;

	cout << "A temperatura de " << c << " graus Celsius corresponde a:" << endl;
	celsiusParaFahrenheit(c);
	celsiusParaKelvin(c);
}

void celsiusParaFahrenheit(double c) {
	cout << (c * 1.8 + 32) << " graus Farenheit" << endl;
}

void celsiusParaKelvin(double c) {
	cout << (c + 273.15) << " graus Kelvin";
}