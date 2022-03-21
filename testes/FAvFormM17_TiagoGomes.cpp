#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mostrarMenu();
char obterEscolha();
void fazerDesconhecido();

void fazerAdicionar(vector<int>& v);
void mostrarLista(const vector<int> &v);
void mostrarListaInvertida(const vector<int> &v);

int main() {
	vector<int> lista{};
	char escolha{};

	do {
		mostrarMenu();
		escolha = obterEscolha();

		switch (escolha) {
			case 'A':
				fazerAdicionar(lista);
				break;
			case 'B':
				mostrarLista(lista);
				break;
			case 'C':
				mostrarListaInvertida(lista);
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
	cout << "\nA - Adicionar um numero ao vetor" << endl;
	cout << "B - Listar os numeros do vetor do primeiro ao ultimo" << endl;
	cout << "C - Listar os numeros do vetor do ultimo ao primeiro" << endl;
	cout << "S - Sair" << endl;
	cout << "\nIntroduza a sua escolha: ";
}

char obterEscolha() {
	char escolha{};
	cin >> escolha;
	return toupper(escolha);
}

void fazerAdicionar(vector<int>& v) {
	int n{};
	cout << "\nIntroduza um numero inteiro: ";
	cin >> n;

	v.push_back(n);
	cout << n << " adicionado a lista" << endl;
}

void mostrarLista(const vector<int>& v) {
	cout << "\n";
	if(v.size() == 0) {
		cout << "[] - a lista esta vazia" << endl;
		return;
	}
	cout << "[ ";
	for(auto i : v) cout << i << " ";
	cout << "]" << endl;
}

void mostrarListaInvertida(const vector<int> &v) {
	cout << "\n";
	if(v.size() == 0) {
		cout << "[] - a lista esta vazia" << endl;
		return;
	}
	vector<int> invertido{v};
	reverse(invertido.begin(), invertido.end());
	cout << "[ ";
	for(auto i : invertido) cout << i << " ";
	cout << "]" << endl;
}

void fazerDesconhecido() {
	cout << "\nSeleção desconhecida. Por favor repita." << endl;
}