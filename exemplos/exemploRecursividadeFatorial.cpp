#include <iostream>

using namespace std;

long fatorial(long);

int main()
{
	int numero;
	cout << "Introduza o numero para verificar o seu fatorial: ";
	cin >> numero;
	cout << "O fatorial de " << numero << " e " << fatorial(numero);
}

long fatorial(long numero) {
	if(numero == 0) 
		return 1;
	else
		return numero * fatorial(numero - 1);
}