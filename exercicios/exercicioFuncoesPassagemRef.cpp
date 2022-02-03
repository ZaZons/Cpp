#include <iostream>
#include <vector>
#include <string>

using namespace std;

void passPorRef(int& num);
void passPorRef(string& s);
void passPorRef(vector<string>& v);
void mostrarVector(const vector<string>& v);

int main() {
	int num{10};
	int outroNum{20};
	
	cout << "num antes de chamar passPorRef: " << num << endl;
	passPorRef(num);
	cout << "num apos chamar passPorRef: " << num << endl;

	cout << "\noutro num antes de chamar passPorRef: " << outroNum << endl;
	passPorRef(outroNum);
	cout << "outro num apos chamar passPorRef: " << outroNum << endl;

	string nome{"Pedro"};
	cout << "\nnome antes de chamar passPorRef: " << nome << endl;
	passPorRef(nome);
	cout << "nome apos chamar passPorRef: " << nome << endl;

	vector<string> tresDuques{"Bo", "Luke", "Daisy"};
	cout << "\ntresDuques antes de chamar passPorRef: ";
	mostrarVector(tresDuques);
	passPorRef(tresDuques);
	cout << "\ntresDuques apos chamar passPorRef: ";
	mostrarVector(tresDuques);
}

void passPorRef(int& num) {
	num = 1000;
}

void passPorRef(string& s) {
	s = "String alterada";
}

void passPorRef(vector<string>& v) {
	v.clear();
}

void mostrarVector(const vector<string>& v) {
	for (auto s : v) cout << s << " ";
	cout << endl;
}