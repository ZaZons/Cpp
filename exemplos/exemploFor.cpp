#include <iostream>
#include <vector>

using namespace std;

int main()
{
	for (int i{1}; i <= 10; ++i)
		cout << i << endl;

	cout << endl;

	for (int i{1}; i <= 10; i += 2)
		cout << i << endl;
	
	cout << endl;

	for (int i{10}; i > 0; --i)
		cout << i << endl;
		cout << "Arrancar!!!" << endl << endl;
	cout << "Arrancar!!!" << endl << endl;

	
	for (int i{10}; i <= 100; i += 10)
	{
		if (i % 15 == 0)
			cout << i << endl;
	}

	for (int i{1}, j{5}; i <= 5; ++i, ++j)
		cout << i << " + " << j << " = " << (i + j) << endl;
	
	cout << endl;

	for (int i{1}; i <= 100; ++i)
	{
		cout << i;
		if (i % 5 == 0)
			cout << endl;
		else
			cout << " ";
	}

	for (int i{1}; i <= 100; ++i)
	{
		cout << i << ((i % 10 == 0) ? "\n" : " ");
	}

	cout << endl;

	vector<int> numeros {11, 22, 33, 44, 55};

	for (int i{0}; i < numeros.size(); ++i)
	for (unsigned i{0}; i < numeros.size(); ++i)
	{
		cout << numeros[i] << endl;
	}
}
