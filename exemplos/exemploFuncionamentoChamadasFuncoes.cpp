#include <iostream>

using namespace std;

void exemploLocal(int);
void exemploGlobal();
void exemploLocalStatic();

int numero{300};

int main() {
	int numero{100},
		numero1{500};

	cout << "\nnumero (Local): " << numero << " na funcao main" << endl;

	exemploLocal(10);
	exemploLocal(20);

	exemploGlobal();
	exemploGlobal();

	exemploLocalStatic();
	exemploLocalStatic();
	exemploLocalStatic();
}

void exemploGlobal() {
	cout << "\nnumero (Global): " << numero << " na funcao exemploGlobal - inicio" << endl;
	numero *= 2;
	
	cout << "\nnumero (Global): " << numero << " na funcao exemploGlobal - final" << endl;
}

void exemploLocal(int x) {
	int numero{1000};
	cout << "\nnumero (Local): " << numero << " na funcao exemploLocal - inicio" << endl;
	numero = x;
	cout << "\nnumero (Local): " << numero << " na funcao exemploLocal - final" << endl;
}

void exemploLocalStatic() {
	static int numero{5000};
	cout << "\nnumero (LocalStatic): " << numero << " na funcao exemploLocalStatic - inicio" << endl;
	numero += 1000;
	cout << "\nnumero (LocalStatic): " << numero << " na funcao exemploLocalStatic - final" << endl;
}
