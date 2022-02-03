#include <iostream>

using namespace std;

void mostrarTabuada(int);

int main() {
	for(size_t i = 1; i <= 9; ++i)
		mostrarTabuada(i);
}

void mostrarTabuada(int x) {
	cout << "\n";
	for(size_t j = 1; j <= 9; ++j)
		cout << x << "*" << j << "=" << x * j << "\t";
}