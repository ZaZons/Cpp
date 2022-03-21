// Teste2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Classe para definir output da consola como UTF8
class UTF8CodePage {
public:
	UTF8CodePage() : m_old_code_page(::GetConsoleOutputCP()) {
		::SetConsoleOutputCP(CP_UTF8);
	}
	~UTF8CodePage() { ::SetConsoleOutputCP(m_old_code_page); }

private:
	UINT m_old_code_page;
};


int main()
{
	vector<string> acao{};
	vector<string> desporto{};
	vector<string> estrategia{};
	vector<string> rpg{};
	char selecaoPrincipal{};

	// Utilizar UTF8 no output da consola
	UTF8CodePage use_utf8;

	do {
		// Menu principal a apresentar
		cout << "\nA - Adicionar jogo" << endl;
		cout << "V - Visualizar categorias" << endl;
		cout << "S - Sair" << endl;
		cout << "\nIntroduza a sua escolha: ";
		cin >> selecaoPrincipal;

		switch (selecaoPrincipal) {
		case 'A':
		case 'a':
			{
				char selecaoMenuAdicionarJogo{};
				bool jogoAcao = false;
				bool jogoDesporto = false;
				bool jogoEstrategia = false;
				bool jogoRpg = false;

				do {
					// Menu "Adicionar Jogo" a apresentar
					if (jogoAcao) {
						cout << "\n[X] - A - Adicionar aos jogos de AÇÃO" << endl;
					}
					else {
						cout << "\n[ ] - A - Adicionar aos jogos de AÇÃO" << endl;
					}
					if (jogoDesporto) {
						cout << "[X] - D - Adicionar aos jogos de DESPORTO" << endl;
					}
					else {
						cout << "[ ] - D - Adicionar aos jogos de DESPORTO" << endl;
					}
					if (jogoEstrategia) {
						cout << "[X] - E - Adicionar aos jogos de ESTRATÉGIA" << endl;
					}
					else {
						cout << "[ ] - E - Adicionar aos jogos de ESTRATÉGIA" << endl;
					}
					if (jogoRpg) {
						cout << "[X] - R - Adicionar aos jogos RPG" << endl;
					}
					else {
						cout << "[ ] - R - Adicionar aos jogos RPG" << endl;
					}
					cout << "I - Inserir jogo nas categorias selecionadas" << endl;
					cout << "\nIntroduza a sua escolha: ";
					cin >> selecaoMenuAdicionarJogo;

					switch (selecaoMenuAdicionarJogo) {
						case 'A':
						case 'a':
						{
							if (jogoAcao) {
								jogoAcao = false;
							}
							else {
								jogoAcao = true;
							}
						}
						break;
						case 'D':
						case 'd':
						{
							if (jogoDesporto) {
								jogoDesporto = false;
							}
							else {
								jogoDesporto = true;
							}
						}
						break;
						case 'E':
						case 'e':
						{
							if (jogoEstrategia) {
								jogoEstrategia = false;
							}
							else {
								jogoEstrategia = true;
							}
						}
						break;
						case 'R':
						case 'r':
						{
							if (jogoRpg) {
								jogoRpg = false;
							}
							else {
								jogoRpg = true;
							}
						}
						break;
						case 'I':
						case 'i':
							break;
						default:
							cout << "Seleção desconhecida. Por favor repita." << endl;
					}

				} while (selecaoMenuAdicionarJogo != 'i' && selecaoMenuAdicionarJogo != 'I');

				if (jogoAcao || jogoDesporto || jogoEstrategia || jogoRpg) {
					string nomeJogo;
					cout << "Introduza o nome do jogo: ";
					// cin >> nomeJogo; // Não aceita espaços nos nomes
					getline(cin >> ws, nomeJogo);


					if (jogoAcao) {
						acao.push_back(nomeJogo);
					}
					if (jogoDesporto) {
						desporto.push_back(nomeJogo);
					}
					if (jogoEstrategia) {
						estrategia.push_back(nomeJogo);
					}
					if (jogoRpg) {
						rpg.push_back(nomeJogo);
					}
				}
				else {
					cout << "Tem de escolher uma categoria, pelo menos" << endl;
				}

				break;
			}
			case 'R':
			case 'r':{
				bool jogoAcao = false;
				bool jogoDesporto = false;
				bool jogoEstrategia = false;
				bool jogoRpg = false;
				string nomeJogo;

				cout << "Introduza o nome do jogo: ";
				getline(cin >> ws, nomeJogo);

				if(find(acao.begin(), acao.end(), nomeJogo) != acao.end()) {
					cout << "\n[ ] - A - Remover dos jogos de AÇÃO";
				}
				if (find(desporto.begin(), desporto.end(), nomeJogo) != desporto.end())
				{
					cout << "\n[ ] - D - Remover dos jogos de DESPORTO";
				}
				if (find(estrategia.begin(), estrategia.end(), nomeJogo) != estrategia.end())
				{
					cout << "\n[ ] - E - Remover dos jogos de ESTRATÉGIA";
				}
				if (find(rpg.begin(), rpg.end(), nomeJogo) != rpg.end())
				{
					cout << "\n[ ] - R - Remover dos jogos de RPG";
				}
			}
			case 'V':
			case 'v':
			{
				char selecaoMenuVisualizarJogo{};
				do {
					// Menu "Visualizar Jogo" a apresentar
					cout << "\nA - Visualizar os jogos de AÇÃO" << endl;
					cout << "D - Visualizar os jogos de DESPORTO" << endl;
					cout << "E - Visualizar os jogos de ESTRATÉGIA" << endl;
					cout << "R - Visualizar os jogos RPG" << endl;
					cout << "V - Voltar ao menu principal" << endl;
					cout << "\nIntroduza a sua escolha: ";
					cin >> selecaoMenuVisualizarJogo;

					switch (selecaoMenuVisualizarJogo) {
						case 'A':
						case 'a':
						{
							cout << "\nCATEGORIA: AÇÃO" << "\n--------------------" << endl;
							if (acao.size() == 0) {
								cout << "\tA categoria selecionada não tem qualquer jogo inserido" << endl;
							}
							else {
								int i = 1;
								for (string jogo : acao) {
									cout << "\t" << i++ << " - " << jogo << endl;
								}
							}
							break;
						}
						case 'D':
						case 'd':
						{
							cout << "\nCATEGORIA: DESPORTO" << "\n--------------------" << endl;
							int i = 1;
							if (desporto.size() == 0) {
								cout << "\tA categoria selecionada não tem qualquer jogo inserido" << endl;
							}
							else {
								int i = 1;
								for (string jogo : desporto) {
									cout << "\t" << i++ << " - " << jogo << endl;
								}
							}
							break;
						}
						case 'E':
						case 'e':
						{
							cout << "\nCATEGORIA: ESTRATÉGIA" << "\n--------------------" << endl;
							int i = 1;
							if (estrategia.size() == 0) {
								cout << "\tA categoria selecionada não tem qualquer jogo inserido" << endl;
							}
							else {
								int i = 1;
								for (string jogo : estrategia) {
									cout << "\t" << i++ << " - " << jogo << endl;
								}
							}
							break;
						}
						case 'R':
						case 'r':
						{
							cout << "\nCATEGORIA: RPG" << "\n--------------------" << endl;
							int i = 1;
							if (rpg.size() == 0) {
								cout << "\tA categoria selecionada não tem qualquer jogo inserido" << endl;
							}
							else {
								int i = 1;
								for (string jogo : rpg) {
									cout << "\t" << i++ << " - " << jogo << endl;
								}
							}
							break;
						}
						case 'V':
						case 'v':
							break;

						default:
							cout << "Seleção desconhecida. Por favor repita." << endl;
					}

				} while (selecaoMenuVisualizarJogo != 'v' && selecaoMenuVisualizarJogo != 'V');
				break;
			}
			
			case 'S':
			case 's':
			{
				cout << "Adeus" << endl;
				break;
			}
			default:
				cout << "Seleção desconhecida. Por favor repita." << endl;

		}
	} while (selecaoPrincipal != 's' && selecaoPrincipal != 'S');

	cout << endl;
}
