#include <iostream>

using namespace std;

bool obterResposta();
double calcularSalarioLiquido(double);
double calcularIrs(double bruto, double taxa = .115);
double calcularSs(double bruto, double irs, double taxa = .13);

int main() {
	double salarioBruto{}, salarioLiquido{};
	
	cout << "Introduza o valor do salario bruto: ";
	cin >> salarioBruto;

	salarioLiquido = calcularSalarioLiquido(salarioBruto);

	cout << "O salario liquido sera de " << salarioLiquido;
}

double calcularSalarioLiquido(double bruto) {
	double irs{}, ss{};
	cout << "Deseja introduzir uma taxa de IRS??? ";
	if(obterResposta()) {
		double taxa{};
		cout << "Qual a taxa??? ";
		cin >> taxa;
		irs = calcularIrs(bruto, taxa);
	} else {
		irs = calcularIrs(bruto);
	}
	
	cout << "Deseja introduzir uma taxa de SS??? ";
	if(obterResposta()) {
		double taxa{};
		cout << "Qual a taxa??? ";
		cin >> taxa;
		ss = calcularSs(bruto, irs, taxa);
	} else {
		ss = calcularSs(bruto, irs);
	}

	return ss;
}

double calcularIrs(double bruto, double taxa) {
	return bruto - bruto * taxa;
}

double calcularSs(double bruto, double irs, double taxa) {
	return irs - bruto * taxa;
}

bool obterResposta() {
	char resposta{};
	bool confirmacao{};
	
	do {
		cin >> resposta;
		resposta = toupper(resposta);
		switch(resposta) {
			case 'S':
				confirmacao = true;
				break;
			case 'N':
				confirmacao = false;
				break;
			default:
				cout << "Opcao invalida. Tente de novo: ";
		}
	} while(resposta != 'S' && resposta != 'N');
	
	return confirmacao;
}

