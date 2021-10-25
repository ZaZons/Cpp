#include <iostream>

using namespace std;

int main()
{
	const int contador{3};
	int total{};
	int numUm{}, numDois{}, numTres{};

	cout << "Introduza tres numeros inteiros separados por espacos: ";
	cin >> numUm >> numDois >> numTres;

	total = numUm + numDois + numTres;

	double media{0.0};
	// media = total / contador;
	media = static_cast<double>(total) / contador;
	
	cout << "Os 3 numeros foram : " << numUm << " / " << numDois << " / " << numTres << endl;
	cout << "A soma dos numeros e: " << total << endl;
	cout << "A media dos numeros e: " << media << endl;


}