#include <iostream>

#include <vector>

#include <cstring>
#include <cctype>

#include <iomanip>
#include <string>

using namespace std;

void passagemPorValor1(int);
void passagemPorValor2(string);
void passagemPorValor3(vector<string>);
void mostrarVetor(vector<string>);

int main() {
	int numero{10}, outroNumero{20};

	cout << "numero antes da chamada a passagemPorValor1: " << numero << endl;
	passagemPorValor1(numero);
	cout << "numero apos chamada a passagemPorValor1: " << numero << endl;

	cout << "\noutro numero antes da chamada a passagemPorValor1: " << outroNumero << endl;
	passagemPorValor1(numero);
	cout << "\noutro numero apos chamada a passagemPorValor1: " << outroNumero << endl;

	string nome{"ZaZon"};
	cout << "nome antes da chamada a passagemPorValor2: " << nome << endl;
	passagemPorValor2(nome);
	cout << "nome apos chamada a passagemPorValor2: " << nome << endl;

	vector<string> tresDuques{"Bo", "Luke", "Daisy"};
	cout << "tresDuques antes da chamada a passagemPorValor3: ";
	mostrarVetor(tresDuques);
	passagemPorValor3(tresDuques);
	cout << "tresDuques apos chamada a passagemPorValor3: " << nome << endl;
	mostrarVetor(tresDuques);
}

void passagemPorValor1(int numero) {
	numero = 1000;
}

void passagemPorValor2(string s) {
	s = "Alterado";
}

void passagemPorValor3(vector<string> v) {
	v.clear();
}

void mostrarVetor(vector<string> v) {
	for(auto s : v) cout << s << " ";
	cout << endl;
}