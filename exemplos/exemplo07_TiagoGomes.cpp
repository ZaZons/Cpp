#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vetorUm;
	vector<int> vetorDois;

	vetorUm.push_back(10);
	vetorUm.push_back(20);

	cout << "Elementos do vetorUm:" << endl;
	cout << vetorUm.at(0) << endl;
	cout << vetorUm.at(1) << endl;

	vetorDois.push_back(100);
	vetorDois.push_back(200);

	cout << "Elementos do vetorDois:" << endl;
	cout << vetorDois.at(0) << endl;
	cout << vetorDois.at(1) << endl;

	cout << "Size do vetorDois:" << endl;
	cout << vetorDois.size() << endl;

	vector<vector<int>> vetor2D;

	vetor2D.push_back(vetorUm);
	vetor2D.push_back(vetorDois);

	cout << "Elementos do vetor2D:" << endl;
	cout << vetor2D.at(0).at(0) << endl;
	cout << vetor2D.at(0).at(1) << endl;
	cout << vetor2D.at(1).at(0) << endl;
	cout << vetor2D.at(1).at(1) << endl;

	vetorUm.at(0) = 1000;

	cout << "Elementos do vetor2D (outra vez):" << endl;
	cout << vetor2D.at(0).at(0) << endl;
	cout << vetor2D.at(0).at(1) << endl;
	cout << vetor2D.at(1).at(0) << endl;
	cout << vetor2D.at(1).at(1) << endl;

	cout << "Elementos do vetorUm (sim, outra vez):" << endl;
	cout << vetorUm.at(0) << endl;
	cout << vetorUm.at(1) << endl;
}