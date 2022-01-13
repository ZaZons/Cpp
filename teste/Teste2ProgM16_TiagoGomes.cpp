#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <algorithm>

class UTF8CodePage {
public:
	UTF8CodePage() : m_old_code_page(::GetConsoleOutputCP())
	{
		::SetConsoleOutputCP(CP_UTF8);
	}
	~UTF8CodePage() { ::SetConsoleOutputCP(m_old_code_page); }

private:
	UINT m_old_code_page;
};

using namespace std;

void mostrarMenu();
char obterEscolha();

void fazerAdicionar(vector<string>& a, vector<string>& d, vector<string>& e, vector<string>& r);
void fazerRemover(vector<string>& a, vector<string>& d, vector<string>& e, vector<string>& r);
void fazerVisualizar(const vector<string>& a, const vector<string>& d, const vector<string>& e, const vector<string>& r);
void fazerDesconhecido();

void mostrarCategoria(const vector<string>& v);

int main() {
	UTF8CodePage use_utf8;

	vector<string> categoriaAcao{};
	vector<string> categoriaDesporto{};
	vector<string> categoriaEstrategia{};
	vector<string> categoriaRPG{};
	char escolha{};

	do {
		mostrarMenu();
		escolha = obterEscolha();

		switch (escolha) {
			case 'A':
				fazerAdicionar(categoriaAcao, categoriaDesporto, categoriaEstrategia, categoriaRPG);
				break;
			case 'R':
				fazerRemover(categoriaAcao, categoriaDesporto, categoriaEstrategia, categoriaRPG);
				break;
			case 'V':
				fazerVisualizar(categoriaAcao, categoriaDesporto, categoriaEstrategia, categoriaRPG);
				break;
			case 'S':
				cout << "Adeus";
				break;
			default:
				fazerDesconhecido();
		}
	} while (escolha != 'S');
}

void mostrarMenu() {
	cout << "\nA - Adicionar jogo" << endl;
	cout << "R - Remover jogo" << endl;
	cout << "V - Visualizar categorias" << endl;
	cout << "S - Sair" << endl;
	cout << "\nIntroduza a sua escolha: ";
}

char obterEscolha() {
	char escolha{};
	cin >> escolha;
	return toupper(escolha);
}

void fazerAdicionar(vector<string>& a, vector<string>& d, vector<string>& e, vector<string>& r) {
	char escolha{};
	bool escolhidoAcao = false;
	bool escolhidoDesporto = false;
	bool escolhidoEstrategia = false;
	bool escolhidoRPG = false;
	string nomeDoJogo;

	do {
		cout << endl;
		escolhidoAcao ? cout << "[X]" : cout << "[ ]";
		cout << " - A - Adicionar aos jogos de AÇÃO" << endl;

		escolhidoDesporto ? cout << "[X]" : cout << "[ ]";
		cout << " - D - Adicionar aos jogos de DESPORTO" << endl;

		escolhidoEstrategia ? cout << "[X]" : cout << "[ ]";
		cout << " - E - Adicionar aos jogos de ESTRATÉGIA" << endl;

		escolhidoRPG ? cout << "[X]" : cout << "[ ]";
		cout << " - R - Adicionar aos jogos de RPG" << endl;

		cout << "I - Inserir jogo nas categorias selecionadas" << endl;
		cout << "\nIntroduza a sua escolha: ";
		escolha = obterEscolha();

		switch (escolha) {
			case 'A':
				escolhidoAcao = !escolhidoAcao;
				break;
			case 'D':
				escolhidoDesporto = !escolhidoDesporto;
				break;
			case 'E':
				escolhidoEstrategia = !escolhidoEstrategia;
				break;
			case 'R':
				escolhidoRPG = !escolhidoRPG;
				break;
			case 'I':
				if(!escolhidoAcao && !escolhidoDesporto && !escolhidoEstrategia && !escolhidoRPG) {
					cout << "Tem de escolher uma categoria, pelo menos" << endl;
				} else {
					cout << "Introduza o nome do jogo: ";
					getline(cin >> ws, nomeDoJogo);
					if(escolhidoAcao) a.push_back(nomeDoJogo);
					if(escolhidoDesporto) d.push_back(nomeDoJogo);
					if(escolhidoEstrategia) e.push_back(nomeDoJogo);
					if(escolhidoRPG) r.push_back(nomeDoJogo);
				}
				break;
			default:
				fazerDesconhecido();
		}
	} while (escolha != 'I'); 
}

void fazerRemover(vector<string>& a, vector<string>& d, vector<string>& e, vector<string>& r) {
	char escolha{};
	bool jogoAcao = false;
	bool jogoDesporto = false;
	bool jogoEstrategia = false;
	bool jogoRPG = false;
	bool removerAcao = false;
	bool removerDesporto = false;
	bool removerEstrategia = false;
	bool removerRPG = false;
	string nomeDoJogo;

	cout << "Introduza o nome do jogo: ";
	getline(cin >> ws, nomeDoJogo);

	do {
		if(find(a.begin(), a.end(), nomeDoJogo) != a.end()) jogoAcao = true;
		if(find(d.begin(), d.end(), nomeDoJogo) != d.end()) jogoDesporto = true;
		if(find(e.begin(), e.end(), nomeDoJogo) != e.end()) jogoEstrategia = true;
		if(find(r.begin(), r.end(), nomeDoJogo) != r.end()) jogoRPG = true;

		if(jogoAcao || jogoDesporto || jogoEstrategia || jogoRPG) {
			cout << endl;
			if(jogoAcao) {
				removerAcao ? cout << "[X]" : cout << "[ ]";
				cout << " - A - Remover dos jogos de AÇÃO" << endl;
			}
			if (jogoDesporto) {
				removerDesporto ? cout << "[X]" : cout << "[ ]";
				cout << " - D - Remover dos jogos de DESPORTO" << endl;
			}
			if (jogoEstrategia) {
				removerEstrategia ? cout << "[X]" : cout << "[ ]";
				cout << " - E - Remover dos jogos de ESTRATÉGIA" << endl;
			}
			if (jogoRPG) {
				removerRPG ? cout << "[X]" : cout << "[ ]";
				cout << " - R - Remover dos jogos de RPG" << endl;
			}

			cout << "\nT - Tirar o jogo da(s) categoria(s) selecionada(s)" << endl;
			cout << "\nIntroduza a sua escolha: ";
			escolha = obterEscolha();
		} else {
			cout << "O jogo não existe em nenhuma das categorias" << endl;
			break;
		}
		
		if(escolha) {
			switch (escolha) {
			case 'A':
				if (jogoAcao) removerAcao = !removerAcao;
				else fazerDesconhecido();
				break;
			case 'D':
				if (jogoDesporto) removerDesporto = !removerDesporto;
				else fazerDesconhecido();
				break;
			case 'E':
				if (jogoEstrategia) removerEstrategia = !removerEstrategia;
				else fazerDesconhecido();
				break;
			case 'R':
				if (jogoRPG) removerRPG = !removerRPG;
				else fazerDesconhecido();
				break;
			case 'T':
				if (!removerAcao && !removerDesporto && !removerEstrategia && !removerRPG) {
					cout << "Tem de escolher uma categoria, pelo menos" << endl;
				} else {
					if (removerAcao && jogoAcao) {
						for(int i = 0; i < a.size(); ++i) {
							if(nomeDoJogo == a.at(i)) {
								a.erase(a.begin() + i);
								break;
							}
						}
					}
					if (removerDesporto && jogoDesporto) {
						for(int i = 0; i < d.size(); ++i) {
							if(nomeDoJogo == d.at(i)) {
								d.erase(d.begin() + i);
								break;
							}
						}
					}
					if (removerEstrategia && jogoEstrategia) {
						for(int i = 0; i < e.size(); ++i) {
							if(nomeDoJogo == e.at(i)) {
								e.erase(e.begin() + i);
								break;
							}
						}
					}
					if (removerRPG && jogoRPG) {
						for(int i = 0; i < r.size(); ++i) {
							if(nomeDoJogo == r.at(i)) {
								r.erase(r.begin() + i);
								break;
							}
						}
					}
				}
				break;
			default:
				fazerDesconhecido();
			}
		}
	} while (escolha != 'T');
}

void fazerVisualizar(const vector<string>& a, const vector<string>& d, const vector<string>& e, const vector<string>& r) {
	char escolha{};
	do {
		cout << endl;
		cout << "A - Visualizar os jogos de AÇÃO" << endl;
		cout << "D - Visualizar os jogos de DESPORTO" << endl;
		cout << "E - Visualizar os jogos de ESTRATÉGIA" << endl;
		cout << "R - Visualizar os jogos de RPG" << endl;
		cout << "V - Voltar o menu principal" << endl;
		cout << "\nIntroduza a sua escolha: ";
		escolha = obterEscolha();

		switch (escolha) {
			case 'A':
				cout << "\nCATEGORIA: AÇÃO" << endl;
				cout << "-------------------" << endl;
				mostrarCategoria(a);
				break;
			case 'D':
				cout << "\nCATEGORIA: DESPORTO" << endl;
				cout << "-------------------" << endl;
				mostrarCategoria(d);
				break;
			case 'E':
				cout << "\nCATEGORIA: ESTRATÉGIA" << endl;
				cout << "-------------------" << endl;
				mostrarCategoria(e);
				break;
			case 'R':
				cout << "\nCATEGORIA: RPG" << endl;
				cout << "-------------------" << endl;
				mostrarCategoria(r);
				break;
			case 'V':
				break;
			default: 
				fazerDesconhecido();
		}
	} while (escolha != 'V');
}

void mostrarCategoria(const vector<string>& v) {
	if (v.size() == 0) {
		cout << "\tA categoria selecionada não tem qualquer jogo inserido" << endl;
	} else {
		for(int i = 0; i < v.size(); ++i) 
			cout << "\t" << i + 1 << " - " << v.at(i) << endl;
	}
}

void fazerDesconhecido() {
	cout << "\nSeleção desconhecida. Por favor repita." << endl;
}