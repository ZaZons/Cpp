#include <iostream>
#include <string>

using namespace std;

void mostrarListaConvidados(const string conv1, const string conv2, const string conv3);
void limparListaConvidados(string& conv1, string& conv2, string& conv3);

int main() {
	string nome1{}, nome2{}, nome3{};

	cout << "Introduza o nome dos 3 convidados: ";
	cin >> nome1 >> nome2 >> nome3;

	mostrarListaConvidados(nome1, nome2, nome3);
	limparListaConvidados(nome1, nome2, nome3);
	mostrarListaConvidados(nome1, nome2, nome3);
}

void mostrarListaConvidados(const string conv1, const string conv2, const string conv3) {
	cout << "\nConvidado 1: " << conv1 << endl;
	cout << "Convidado 2: " << conv2 << endl;
	cout << "Convidado 3: " << conv3 << endl;
}

void limparListaConvidados(string& conv1, string& conv2, string& conv3) {
	conv1 = " ";
	conv2 = " ";
	conv3 = " ";
}