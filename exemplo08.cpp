#include <iostream>

using namespace std;

int main()
{
	const int dolar{100}, quarter{25}, dime{10}, nickel{5};
	int x{}, rDolar{}, rQuarter{}, rDime{}, rNickel{}, cents{};

	cout << "Insira o numero de centimos" << endl;
	cin >> x;

	if(x >= dolar)
	{
		rDolar = (x / dolar);
		cout << "Dollars: " << rDolar << endl;
		x %= dolar;
	}

	if(x >= quarter)
	{
		rQuarter = (x / quarter);
		cout << "Quarters: " << rQuarter << endl;
		x %= quarter;
	}

	if (x >= dime)
	{
		rDime = (x / dime);
		cout << "Dime: " << rDime << endl;
		x %= dime;
	}

	if (x >= nickel)
	{
		rNickel = (x / nickel);
		cout << "Nickel: " << rNickel << endl;
		x %= nickel;
	}

	if (x > 0) cout << "Cents: " << x << endl;

}
