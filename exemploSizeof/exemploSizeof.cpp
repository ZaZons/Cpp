// exemploSizeof.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>

using namespace std;

int main()
{
	system("chcp 1252 > nul");

	cout << "Informacao SIZEOF" << endl;
	cout << "==================================================" << endl;

	cout << "char: " << sizeof(char) << " byte(s)" << endl;
	cout << "int: " << sizeof(int) << " byte(s)" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl;
	cout << "short: " << sizeof(short) << " byte(s)" << endl;
	cout << "long: " << sizeof(long) << " byte(s)" << endl;
	cout << "long long: " << sizeof(long long) << " byte(s)" << endl;

	cout << "=================================================" << endl;

	cout << "float: " << sizeof(float) << " byte(s)" << endl;
	cout << "double: " << sizeof(double) << " byte(s)" << endl;
	cout << "long double: " << sizeof(long double) << " byte(s)" << endl;

	cout << "=================================================" << endl;

	cout << "Valores minimos: " << endl;
	cout << "char: " << CHAR_MIN << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;

	cout << "=================================================" << endl;

	cout << "Valores maximos: " << endl;
	cout << "char: " << CHAR_MAX << endl;
	cout << "int: " << INT_MAX << endl;
	cout << "short: " << SHRT_MAX << endl;
	cout << "long: " << LONG_MAX << endl;
	cout << "long long: " << LLONG_MAX << endl;

	cout << "================================================" << endl;

	cout << "Sizeof utilizando nomes de variaveis" << endl;
	int idade{ 49 };
	cout << "A idade e " << sizeof(idade) << " bytes" << endl;
	// ou
	cout << "A idade e " << sizeof idade << " bytes" << endl;

	cout << "================================================" << endl;

	cout << "Sizeof utlilizando nomes de variaveis" << endl;
	double despesasSaude{ 3.99 };
	cout << "A despesa de saude e: " << sizeof(despesasSaude) << " bytes" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
