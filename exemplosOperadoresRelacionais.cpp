#include <iostream>

using namespace std;

int main()
{
	int numUm{}, numDois{};

	cout << boolalpha;

	cout << "Introduza dois inteiros separados por um espaco: ";
	cin >> numUm >> numDois;

	cout << numUm << " > " << numDois << ": " << (numUm > numDois) << endl;
	cout << numUm << " >= " << numDois << ": " << (numUm >= numDois) << endl;
	cout << numUm << " < " << numDois << ": " << (numUm < numDois) << endl;
	cout << numUm << " <= " << numDois << ": " << (numUm <= numDois) << endl;

	const int inferior{10};
	const int superior{20};

	cout << "\nIntroduza um inteiro maior do que " << inferior << ": ";
	cin >> numUm;

	cout << numUm << " > " << inferior << ": " << (numUm > inferior) << endl;

	cout << "\nIntroduza um inteiro menos ou igual do que " << superior << ": ";
	cin >> numUm;

	cout << numUm << " <= " << superior << ": " << (numUm <= superior) << endl;
}