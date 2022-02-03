#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int acharArea(int);
double acharArea(double, double);

int acharArea(int compLado) {
	return pow(compLado, 2);
}

double acharArea(double comp, double alt) {
	return comp * alt;
}

int main() {
	int areaQuadrado{}, comprimentoLados{};
	double areaRetangulo{}, comprimentoRetangulo{}, larguraRetangulo{};

	cout << "Introduza o valor dos lados do quadrado: ";
	cin >> comprimentoLados;
	cout << "A area do quadrado cujos lados sao " << comprimentoLados << " e " << acharArea(comprimentoLados) << endl;

	cout << "Introduza o valor do comprimento do retangulo: ";
	cin >> comprimentoRetangulo;
	cout << "Introduza o valor da largura do retangulo: ";
	cin >> larguraRetangulo;
	cout << "A area do retangulo com comprimento " << comprimentoRetangulo << " e largura " << larguraRetangulo << " e " << acharArea(comprimentoRetangulo, larguraRetangulo) << endl;
}