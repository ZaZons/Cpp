#include <iostream>

using namespace std;

int main()
{	
	int arrTeste[10]{0};

	arrTeste[0] = 250;
	arrTeste[9] = 500;

	cout << "Insira o segundo, terceiro e quarto valores: ";
	cin >> arrTeste[1] >> arrTeste[2] >> arrTeste[3];

	cout << arrTeste[0] << endl;
	cout << arrTeste[1] << endl;
	cout << arrTeste[2] << endl;
	cout << arrTeste[3] << endl;
	cout << arrTeste[4] << endl;
	cout << arrTeste[5] << endl;
	cout << arrTeste[6] << endl;
	cout << arrTeste[7] << endl;
	cout << arrTeste[8] << endl;
	cout << arrTeste[9] << endl;
}
