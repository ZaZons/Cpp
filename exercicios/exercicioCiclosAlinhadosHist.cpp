#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int itens{};

	cout << "Quantos itens de dados tem??? ";
	cin >> itens;

	vector<int> vetor{};

	for(int i{0}; i < itens; ++i)
	{
		int x{};
		
		cout << "Introduza o item de dados " << i + 1 << ": ";
		cin >> x;

		vetor.push_back(x); 
	}

	cout << "\n\nApresentando o histograma" << endl;
	for(auto valor : vetor)
	{
		cout << "\n";
		for (int i{1}; i <= valor; ++i)
		{
			if(i % 5 == 0) cout << "*";
			else cout << "-";
		}
	}
}