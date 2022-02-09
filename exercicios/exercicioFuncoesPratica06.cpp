#include <iostream>
#include <cmath>

using namespace std;

void mostrarMenu();

int lerPotenciaInt();
int lerBaseInt();
float lerBaseFloat();
double lerBaseDouble();

void calcularPotencia(int, int);
void calcularPotencia(int, float);
void calcularPotencia(int, double);

int main() {
	int resposta{};

	do {
		mostrarMenu();
		
		cin >> resposta;
		switch(resposta) {
			case 1: {
				calcularPotencia(lerPotenciaInt(), lerBaseInt());
				break;
			}
			case 2: {
				calcularPotencia(lerPotenciaInt(), lerBaseFloat());
				break;
			}
			case 3: {
				calcularPotencia(lerPotenciaInt(), lerBaseDouble());
				break;
			}
			case 0: {
				cout << "Adeus!!!";
				break;
			}
			default: {
				cout << "Opcao desconhecida!!!" << endl;
				break;
			}
		}
	} while(resposta != 0);
}

void mostrarMenu() {
	cout << "--------------------------------" << endl;
	cout << "CALCULO DA POTENCIA DE UM NUMERO" << endl;
	cout << "--------------------------------" << endl;

	cout << "1 - Introduzir numero inteiro" << endl;
	cout << "2 - Introduzir numero float" << endl;
	cout << "3 - Introduzir numero double" << endl;
	cout << "0 - Sair" << endl;

	cout << "Opcao: ";
}

int lerPotenciaInt() {
	int potencia{};

	cout << "Introduzir o valor da potencia (int): ";
	cin >> potencia;
	
	return potencia;
}

int lerBaseInt() {
	int base{};

	cout << "Introduzir o valor da base (int): ";
	cin >> base;
	
	return base;
}

float lerBaseFloat() {
	float base{};

	cout << "Introduzir o valor da base (float): ";
	cin >> base;
	
	return base;
}

double lerBaseDouble() {
	double base{};

	cout << "Introduzir o valor da base (int): ";
	cin >> base;
	
	return base;
}

void calcularPotencia(int p, int b) {
	cout << "Resultado: " << pow(b, p) << endl;
}

void calcularPotencia(int p, float b) {
	cout << "Resultado: " << pow(b, p) << endl;
}

void calcularPotencia(int p, double b) {
	cout << "Resultado: " << pow(b, p) << endl;
}

