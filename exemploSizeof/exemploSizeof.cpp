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