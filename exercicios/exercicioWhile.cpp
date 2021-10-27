#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vetor{15, 16, 17, 18, 19, 20, 21, 54, 55, 100, 200, 300};
	//vector<int> vetor{15, 16, 17, 18, 19, 20, 21, -99, 54, 55, 100, 200, 300};
	bool encontrado{false};
	int contagem{-1}, i{0};

	while (i < vetor.size() && !encontrado)
	{
		if (vetor.at(i) == -99)
		{
			contagem = i;
			encontrado = true;
		}
		++i;
	}

	if(!encontrado) contagem = vetor.size();
	cout << contagem << endl;
}