#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numeros{10, 3, 22, 5};
	char selecao{};

	do {
		// Menu a apresentar
		cout << endl;
		cout << "V - Visualizar os numeros" << endl;
		cout << "A - Adicionar um numero" << endl;
		cout << "M - Media dos numeros" << endl;
		cout << "P - Pequeno - mostrar o menor numero" << endl;
		cout << "G - Grande - mostrar o maior numero" << endl;
		cout << "S - Sair" << endl;
		cout << "\nIntroduza a sua escolha: ";
		cin >> selecao;

		switch (selecao)
		{
			case 'V':
			case 'v':
			{
				if (numeros.size() > 0)
				{
					cout << "\n[ ";
					for (size_t i{0}; i < numeros.size(); ++i)
					{
						cout << numeros.at(i) << " ";
					}
					cout << "]" << endl;
				}
				else
				{
					cout << "[] - a lista está vazia" << endl;
				}
			}
			break;

			case 'A':
			case 'a':
			{
				int n{};
				cout << "Introduza um numero inteiro para adicionar a lista: ";
				cin >> n;

				numeros.push_back(n);
				cout << n << " adicionado a lista" << endl;
			}
			break;

			case 'M':
			case 'm':
			{
				if (numeros.size() > 0)
				{
					double x{0.0};
					for (size_t j{0}; j < numeros.size(); ++j)
					{
						x += numeros.at(j);
					}
					x /= numeros.size();

					cout << "A media e: " << x << endl;
				}
				else
				{
					cout << "“Nao foi possível calcular a media - nao existem dados" << endl;
				}
			}
			break;

			case 'p':
			case 'P':
			{
				if (numeros.size() > 0)
				{
					int x{numeros.at(0)};
					for (size_t j{0}; j < numeros.size(); ++j)
					{
						if (numeros.at(j) < x) x = numeros.at(j);
					}

					cout << "O menor numero e: " << x << endl;
				}
				else
				{
					cout << "“Nao foi possível encontrar o menor valor - a lista está vazia" << endl;
				}
			}
			break;

			case 'g':
			case 'G':
			{
				if (numeros.size() > 0)
				{
					int x{numeros.at(0)};
					for (size_t j{0}; j < numeros.size(); ++j)
					{
						if (numeros.at(j) > x) x = numeros.at(j);
					}

					cout << "O maior numero e: " << x << endl;
				}
				else
				{
					cout << "“Nao foi possível encontrar o maior valor - a lista está vazia" << endl;
				}
			}
			break;

			case 'S':
			case 's': 
			{
				cout << "Adeus..." << endl;
			}
			break;

			default: 
			{
				cout << "\nSelecao desconhecida. Por favor repita." << endl;
			}
			break;
		}
	} while (selecao != 's' && selecao != 'S');

	cout << endl;
}