#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// vector<char> vogais; // vetor vazio
	// vector<char> vogais(5); // vetor com 5 elementos inicializados a 0

	vector<char> vogais{'a', 'e', 'i', 'o', 'u'};

	cout << vogais[0] << endl;
	cout << vogais[4] << endl;

	// vector<int> notasTeste(3); // 3 elementos todos inicializados a zero
	// vector<int> notasTeste(3, 100); // 3 elementos todos inicializados a 100

	vector<int> notasTeste{89, 78, 55};

	cout << "\nNotas do teste utilizando a sintaxe de arrays: " << endl;
	cout << notasTeste[0] << endl;
	cout << notasTeste[1] << endl;
	cout << notasTeste[2] << endl;

	cout << "\nNotas do teste utilizando a sintaxe de vetores: " << endl;
	cout << notasTeste.at(0) << endl;
	cout << notasTeste.at(1) << endl;
	cout << notasTeste.at(2) << endl;
	cout << "\nExistem " << notasTeste.size() << " notas no vetor." << endl;

	cout << "\nIntroduza as 3 notas de testes: " << endl;
	cin >> notasTeste.at(0);
	cin >> notasTeste.at(1);
	cin >> notasTeste.at(2);

	cout << "\nNotas atualizadas dos testes: " << endl;
	cout << notasTeste.at(0) << endl;
	cout << notasTeste.at(1) << endl;
	cout << notasTeste.at(2) << endl;

	cout << "\nIntroduza 1 nota de um teste para adicionar ao vetor: ";
	
	int notaAdicional{0};
	cin >> notaAdicional;
	notasTeste.push_back(notaAdicional);

	cout << "\nIntroduza outra nota para adicionar ao vetor: ";
	cin >> notaAdicional;
	notasTeste.push_back(notaAdicional);

	cout << "\nAs notas dos testes sao agora: " << endl;
	cout << notasTeste.at(0);
	cout << notasTeste.at(1);
	cout << notasTeste.at(2);
	cout << notasTeste.at(3);
	cout << notasTeste.at(4);
	cout << "\nAgora existem " << notasTeste.size() << " notas no vetor" << endl;

	// cout << notasTeste.at(10) << endl;
	// cout << notasTeste[10] << endl;

	vector<vector<int>> classificacaoFilmes
	{
		{1, 2, 3, 4},
		{1, 2, 4, 4},
		{1, 3, 4, 5}
	};

	cout << "\nAqui estao as classificacoes do critico #1 utilizando a sintaxe de arrays: " << endl;
	cout << classificacaoFilmes[0][0] << endl;
	cout << classificacaoFilmes[0][1] << endl;
	cout << classificacaoFilmes[0][2] << endl;
	cout << classificacaoFilmes[0][3] << endl;

	cout << "\nAqui estao as classificacoes do critico #2 utilizando a sintaxe de vetores: " << endl;
	cout << classificacaoFilmes.at(1).at(0) << endl;
	cout << classificacaoFilmes.at(1).at(1) << endl;
	cout << classificacaoFilmes.at(1).at(2) << endl;
	cout << classificacaoFilmes.at(1).at(3) << endl;

	int class3{0};
	cout << "\nIntroduza as classificacoes do critico #3: " << endl;
	
	cin >> class3;
	classificacaoFilmes.at(1).at(0) = class3;

	cin >> class3;
	classificacaoFilmes.at(1).at(1) = class3;

	cin >> class3;
	classificacaoFilmes.at(1).at(2) = class3;

	cin >> class3;
	classificacaoFilmes.at(1).at(3) = class3;

	cout << "\nAqui estao as classificacoes do critico #3 utilizando a sintaxe de vetores: " << endl;
	cout << classificacaoFilmes.at(2).at(0) << endl;
	cout << classificacaoFilmes.at(2).at(1) << endl;
	cout << classificacaoFilmes.at(2).at(2) << endl;
	cout << classificacaoFilmes.at(2).at(3) << endl;

	vector<int> class4{2, 2, 1, 1};
	classificacaoFilmes.push_back(class4);

	cout << "\nAqui estao as classificacoes do critico #4 utilizando a sintaxe de vetores: " << endl;
	cout << classificacaoFilmes.at(3).at(0) << endl;
	cout << classificacaoFilmes.at(3).at(1) << endl;
	cout << classificacaoFilmes.at(3).at(2) << endl;
	cout << classificacaoFilmes.at(3).at(3) << endl;
}