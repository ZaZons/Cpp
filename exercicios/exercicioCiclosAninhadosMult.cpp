#include <iostream>

using namespace std;

int main()
{
	char resposta{};
	int i{0};
	
	do
	{
		++i;
		cout << "--- Tabuada do " << i << " ---" << endl;

		for (int ii{1}; ii <= 10; ++ii)
			cout << ii << " * " << ii << " = " << i * ii << endl;

		cout << "-----------------" << endl;

			cout << "Pretende passar para a tabuada seguinte???" << endl;
			cin >> resposta;

		if (resposta == 'n' || resposta == 'N')
		{
			cout << "Exiting..." << endl;
			break;
		} 
		else if (resposta == 's' && resposta == 'S')
		{
			continue;
		}

	} while (i < 10);
}