#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int pessoas{};
	double precoTotal{}, precoIndividual{};

	cout << "Introduza o numero de pessoas que jantaram: ";
	cin >> pessoas;

	cout << "Introduza o valor total do jantar: ";
	cin >> precoTotal;

	cout << "Conta total a pagar: " << precoTotal << endl;

	precoIndividual = precoTotal / pessoas;
	cout << "Conta individual de cada pessoa: " << precoIndividual << endl;
	
	cout << "Conta individual de cada pessoa (com funcao floor): " << floor(precoIndividual) << endl;
	cout << "\tNeste caso, a soma das contas individuais seria: " << floor(precoIndividual) * pessoas << endl;

	cout << "Conta individual de cada pessoa (com funcao ceil): " << ceil(precoIndividual) << endl;
	cout << "\tNeste caso, a soma das contas individuais seria: " << ceil(precoIndividual) * pessoas << endl;

	cout << fixed << setprecision(2) << "Conta individual de cada pessoa (com funcao round): " << precoIndividual << endl;
	cout << fixed << setprecision(2) << "\tNeste caso, a soma das contas individuais seria: " << precoIndividual * pessoas << endl;
}