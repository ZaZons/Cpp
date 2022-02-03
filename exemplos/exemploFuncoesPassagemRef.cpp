#include <iostream>
#include <vector>
#include <string>

using namespace std;

void passPorRef1(int& num);
void passPorRef2(string& s);
void passPorRef3(vector<string>& v);
void mostrarVector(const vector<string>& v);

int main() {
	int num{10};
	int outroNum{20};
	
	cout << "num antes de chamar passPorRef1: " << num << endl;
	passPorRef1(num);
	cout << "num apos chamar passPorRef1: " << num << endl;

	cout << "\noutro num antes de chamar passPorRef1: " << outroNum << endl;
	passPorRef1(outroNum);
	cout << "outro num apos chamar passPorRef1: " << outroNum << endl;

	string nome{"Pedro"};
	cout << "\nnome antes de chamar passPorRef2: " << nome << endl;
	passPorRef2(nome);
	cout << "nome apos chamar passPorRef2: " << nome << endl;

	vector<string> tresDuques{"Bo", "Luke", "Daisy"};
	cout << "\ntresDuques antes de chamar passPorRef3: ";
	mostrarVector(tresDuques);
	passPorRef3(tresDuques);
	cout << "\ntresDuques apos chamar passPorRef3: ";
	mostrarVector(tresDuques);
}

void passPorRef1(int& num) {
	num = 1000;
}

void passPorRef2(string& s) {
	s = "String alterada";
}

void passPorRef3(vector<string>& v) {
	v.clear();
}

void mostrarVector(const vector<string>& v) {
	for (auto s : v) cout << s << " ";
	cout << endl;
}