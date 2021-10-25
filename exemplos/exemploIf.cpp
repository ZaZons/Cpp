#include <iostream>

using namespace std;

int main()
{
	int num{};
	const int min{10}, max{100};

	cout << "Introduza um numero entre " << min << " e " << max << ": ";
	cin >> num;

	if (num >= min)
	{
		cout << "\n========== Instrucao If 1 ===========" << endl;
		cout << num << " e maior ou igual a " << min << endl;

		int dif{num - min};
		cout << num << " e maior em " << dif << " que " << min << endl;
	}

	if (num <= max)
	{
		cout << "\n========== Instrucao If 2 ===========" << endl;
		cout << num << " e menor ou igual a " << max << endl;

		int dif{max - num};
		cout << num << " e menor em " << dif << " que " << max << endl;
	}

	if (num >= min && num <= max)
	{
		cout << "\n========== Instrucao If 3 ===========" << endl;
		cout << num << " esta dentro dos limites " << min << endl;

		cout << "Isto significa que as intrucoes 1 e 2 tambem tem de ser mostradas" << endl;
	}

	if (num == min || num == max)
	{
		cout << "\n========== Instrucao If 4 ===========" << endl;
		cout << num << " esta nos limites " << min << endl;

		cout << "Entao todas as 4 instrucoes sao apresentadas" << endl;
	}
}