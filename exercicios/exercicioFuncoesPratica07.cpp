#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void mostrarMenu();
double calcularContaIndividual(int, double);
double calcularContaIndividualAbaixo(double);
double calcularContaIndividualAcima(double);
double calcularContaIndividualArredondada(double);

int main() {
	int pessoas{};
	double conta{};

	cout << "Introduza o numero de pessoas: ";
	cin >> pessoas;

	cout << "Introduza o valor total da conta: ";
	cin >> conta;

	cout << "Conta total a pagar: " << conta << endl;

	double contaIndividual = calcularContaIndividual(pessoas, conta);
	cout << "Conta individual de cada pessoa: " << contaIndividual << endl;

	double contaIndividualAbaixo = calcularContaIndividualAbaixo(contaIndividual);
	cout << "Conta individual de cada pessoa (com funcao floor): " << contaIndividualAbaixo << endl;
	cout << "\tNeste caso, a soma das contas individuais seria: " << (contaIndividualAbaixo * pessoas) << endl;

	double contaIndividualAcima = calcularContaIndividualAcima(contaIndividual);
	cout << "Conta individual de cada pessoa (com funcao ceil): " << contaIndividualAcima<< endl;
	cout << "\tNeste caso, a soma das contas individuais seria: " << (contaIndividualAcima * pessoas) << endl;

	double contaIndividualArredondada = calcularContaIndividualArredondada(contaIndividual);
	cout << "Conta individual de cada pessoa (com funcao round): " << contaIndividualArredondada << endl;
	cout << "\tNeste caso, a soma das contas individuais seria: " << (contaIndividualArredondada * pessoas) << endl;
}

double calcularContaIndividual(int p, double c) {
	return c / p;
}

double calcularContaIndividualAbaixo(double c) {
	return floor(c);
}

double calcularContaIndividualAcima(double c) {
	return ceil(c);
}

double calcularContaIndividualArredondada(double c) {
	cout << fixed << setprecision(2);
	return c;
}
