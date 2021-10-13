#include <iostream>

using namespace std;

int main()
{
	int numUm{12};
	int numDois{11};

	cout << numUm << " + " << numDois << " = " << numUm + numDois << endl;

	int resultado{0};
	resultado = numUm + numDois;

	cout << numUm << " + " << numDois << " = " << resultado << endl;

	resultado = numUm - numDois;
	cout << numUm << " - " << numDois << " = " << resultado << endl;
	
	resultado = numUm * numDois;
	cout << numUm << " * " << numDois << " = " << resultado << endl;

	resultado = numUm / numDois;
	cout << numUm << " / " << numDois << " = " << resultado << endl;

	resultado = numUm % numDois;
	cout << numUm << " % " << numDois << " = " << resultado << endl;

	resultado = numDois / numUm;
	cout << numDois << " / " << numUm << " = " << resultado << endl;

	resultado = numDois % numUm;
	cout << numDois << " % " << numUm << " = " << resultado << endl;

	numUm = 10;
	numDois = 3;
	resultado = numUm % numDois;

	cout << numUm << " / " << numDois << " = " << resultado << endl;

	resultado = numUm * 10 + numDois;
	cout << numUm << " * 10 + " << numDois << " = " << resultado << endl;

	resultado = numUm * (10 + numDois);
	cout << numUm << " * (10 + " << numDois << ") = " << resultado << endl;

	cout << "5 / 10 = " << 5 / 10 << endl;
	cout << "5.0 / 10.0 = " << 5.0 / 10.0 << endl;
}