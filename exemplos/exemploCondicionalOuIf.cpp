#include <iostream>

using namespace std;

int main()
{
	int num{};

	cout << "Introduza um numero inteiro: ";
	cin >> num;

	if (num % 2 == 0)
	{
		cout << num << " e par" << endl;
	}	
	else
	{
		cout << num << " e impar" << endl;
	}

	cout << num << " e " << ((num % 2 == 0) ? "par" : "impar") << endl;
}