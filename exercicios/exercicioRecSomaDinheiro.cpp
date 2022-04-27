#include <iostream>

using namespace std;

double acumularDinheiro(int x);

int main() {
	int x{};
	double res{};

	cout << "Introduza o numero de dias para acumular dinheiro: ";
	cin >> x;

	for(int i{1}; i <= x + 1; ++i) {
		res = acumularDinheiro(i);
	}

	cout << "Valor total: " << res;
}

double acumularDinheiro(int x) {
	static double res{};
	
	if(x == 1) {
		res = .01;
		return res;
	} else {
		res *= 2;
		return res;
	}
}