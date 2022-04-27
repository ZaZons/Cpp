#include <iostream>

using namespace std;

unsigned int palindromoRecursivo(unsigned int);
unsigned int palindromoInterativo(unsigned int);

int main() {
	unsigned int x{};
	
	cout << "Introduza o numero: ";
	cin >> x;

	cout << "Com recursividade: O numero " << x;
	if(x == palindromoRecursivo(x))
		cout << " e capicua (palindromo)";
	else
		cout << " nao e (palindromo)";

	cout << "\nSem recursividade: O numero " << x;
	if(x == palindromoInterativo(x))
		cout << " e capicua (palindromo)";
	else
		cout << " nao e (palindromo)";
}

unsigned int palindromoRecursivo(unsigned int x) {
	static unsigned int numeroInvertido{};
	unsigned int y{x};

	if(y > 0) {
		unsigned int resto{y % 10};
		numeroInvertido = numeroInvertido * 10 + resto;
		palindromoRecursivo(y / 10);
	} else {
		return numeroInvertido;
	}
}

unsigned int palindromoInterativo(unsigned int x) {
	static unsigned int numeroInvertido{};
	unsigned int y{x};

	while(y > 0) {
		unsigned int resto{y % 10};
		numeroInvertido = numeroInvertido * 10 + resto;
		y /= 10;
	}

	return numeroInvertido;
}
