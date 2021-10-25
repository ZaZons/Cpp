#include <iostream>

using namespace std;

int main()
{
	bool resultadoIgualdade{false};
	bool resultadoDesigualdade{false};
	int numUm{}, numDois{};

	cout << boolalpha; //Se ativo, ira mostrar bools como
						// true/false em vez de 1/0

	/* cout << "Introduza dois inteiros separados por um espaco: ";
	cin >> numUm >> numDois;

	resultadoIgualdade = (numUm == numDois);
	resultadoDesigualdade = (numUm != numDois);

	cout << "Resultado da comparacao (igualdade): " << resultadoIgualdade << endl;

	cout << "Resultado da comparacao (desigualdade): " << resultadoDesigualdade << endl; */

	char charUm{}, charDois{};

	/* cout << "Introduza dois caracteres separados por um espaco: ";
	cin >> charUm >> charDois;

	resultadoIgualdade = (charUm == charDois);
	resultadoDesigualdade = (charUm != charDois);

	cout << "Resultado da comparacao (igualdade): " << resultadoIgualdade << endl;

	cout << "Resultado da comparacao (desigualdade): " << resultadoDesigualdade << endl; */

	double doubleUm{}, doubleDois{};

	/* cout << "Introduza dois doubles separados por um espaco: ";
	cin >> doubleUm >> doubleDois;

	resultadoIgualdade = (doubleUm == doubleDois);
	resultadoDesigualdade = (doubleUm != doubleDois);

	cout << "Resultado da comparacao (igualdade): " << resultadoIgualdade << endl;

	cout << "Resultado da comparacao (desigualdade): " << resultadoDesigualdade << endl; */

	cout << "Introduza um inteiro e um double separados por um espaco: ";
	cin >> numUm >> doubleUm;

	resultadoIgualdade = (doubleUm == numUm);
	resultadoDesigualdade = (doubleUm != numUm);

	cout << "Resultado da comparacao (igualdade): " << resultadoIgualdade << endl;

	cout << "Resultado da comparacao (desigualdade): " << resultadoDesigualdade << endl;
}