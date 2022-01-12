#include <iostream>
#include <vector>
#include <cctype>
#include <string>

/* class UTF8CodePage {
public:
	UTF8CodePage() : m_old_code_page(::GetConsoleOutputCP())
	{
		::SetConsoleOutputCP(CP_UTF8);
	}
	~UTF8CodePage() { ::SetConsoleOutputCP(m_old_code_page); }

private:
	UINT m_old_code_page;
}; */

using namespace std;

void mostrarMenu();
char obterEscolha();

void fazerAdicionar();
void mostrarCategorias(const vector<string>& a, const vector<string>& d, const vector<string>& e, const vector<string>& r);

int main() {
	//UTF8CodePage use_utf8;

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
				fazerAdicionar();
				break;
			case 'V':
				mostrarCategorias(categoriaAcao, categoriaDesporto, categoriaEstrategia, categoriaRPG);
				break;
		}
	} while (escolha != 'S');
}

void mostrarMenu() {
	cout << "\nA - Adicionar jogo" << endl;
	cout << "V - Visualizar categorias" << endl;
	cout << "S - Sair" << endl;
	cout << "\nIntroduza a sua escolha: ";
}

char obterEscolha() {
	char escolha{};
	cin >> escolha;
	return toupper(escolha);
}

void fazerAdicionar() {

}

void mostrarCategorias(const vector<string>& a, const vector<string>& d, const vector<string>& e, const vector<string>& r) {
	cout << "CATEGORIA "
	if (a.size() == 0) {
		
	}
}