#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vetor{15, 16, 17, 18, 19, 20, 21, 54, 55, 100, 200, 300};
	int contagem{0};

	for(auto i : vetor)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			cout << i << endl;
			++contagem;
		}
	}
	cout << "Numero de numeros divisiveis por 3 ou 5: " << contagem;
}