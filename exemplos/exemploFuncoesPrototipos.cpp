#include <iostream>

#include <vector>

#include <cstring>
#include <cctype>

#include <iomanip>
#include <string>

using namespace std;

double calcVolumeCilindro(double, double);
double calcAreaCirculo(double);
void areaCirculo();
void volumeCilindro();

const double pi{3.14159};

int main() {
	areaCirculo();
	volumeCilindro();
	return 0;
}

void areaCirculo() {
	double raio{};

	cout << "\nIntroduza o raio do circulo: ";
	cin >> raio;

	cout << "A area do circulo com raio " << raio << " e " << calcAreaCirculo(raio) << endl;
}

double calcAreaCirculo(double raio) {
	return pi * raio * raio;
}

void volumeCilindro() {
	double raio{}, altura{};

	cout << "\nIntroduza o raio da base do cilindro: ";
	cin >> raio;

	cout << "Introduza a altura do cilindro: ";
	cin >> altura;

	cout << "A area do cilindro com base de raio " << raio << " e altura " << altura << " e " << calcVolumeCilindro(raio, altura) << endl;
}


double calcVolumeCilindro(double raio, double altura) {
	return calcAreaCirculo(raio) * altura;
}

