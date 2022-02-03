#include <iostream>
#include <string>
#include <vector>

using namespace std;

void mostrar(int);
void mostrar(double);
void mostrar(string);
void mostrar(string, string);
void mostrar(vector<string>);

void mostrar(int num) {
	cout << "Mostrando um int: " << num << endl;
}

void mostrar(double num) {
	cout << "Mostrando um double: " << num << endl;
}

void mostrar(string s) {
	cout << "Mostrando uma string: " << s << endl;
}

void mostrar(string s, string t) {
	cout << "Mostrando duas strings: " << s << " e " << t << endl;
}

void mostrar(vector<string> v) {
	cout << "Mostrando um vetor de strings: ";
	for(auto s : v) cout << s + " ";
	cout << endl;
}

int main() {
	mostrar(23);
	mostrar('C');
	mostrar(123.5);
	mostrar(123.3F);

	mostrar("String estilo C");

	string s{"String C++"};
	mostrar(s);

	mostrar("String estilo C", s);

	vector<string> tresDuques{"Bo", "Luke", "Daisy"};
	mostrar(tresDuques);
}