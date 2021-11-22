#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string entradaDiario1{"Fernando Pessoa"};
	//entradaDiario1.erase(0, 9);

	size_t erase1 = entradaDiario1.find(" ") + 1;
	entradaDiario1.erase(0, erase1);

	string entradaDiario2{"Augusto Cury"};
	//entradaDiario2.erase(0, 8);

	size_t erase2 = entradaDiario2.find(" ") + 1;
	entradaDiario2.erase(0, erase2);

	if (entradaDiario2 < entradaDiario1) 
	{
		entradaDiario2.swap(entradaDiario1);
	}

	cout << entradaDiario1 << endl << entradaDiario2;
}