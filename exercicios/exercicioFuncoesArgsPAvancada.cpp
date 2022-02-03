#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void imprimirListaCompras(int iogurtes = 8, int ovos = 12, int bananas = 6);
int alterarQuantidade(string);
void mudarOvos();
char obterEscolha();

int main() {
	int iogurtes{}, ovos{}, bananas{};

	iogurtes = alterarQuantidade("iogurtes");
	if(iogurtes == -1) {
		imprimirListaCompras();
	} else {
		ovos = alterarQuantidade("ovos");
		if(ovos == -1) {
			imprimirListaCompras(iogurtes);
		} else {
			bananas = alterarQuantidade("bananas");
			if(bananas == -1) {
				imprimirListaCompras(iogurtes, ovos);
			} else {
				imprimirListaCompras(iogurtes, ovos, bananas);
			}
		}
	}
}

int alterarQuantidade(string produto) {
	char escolha{};
	do {
		cout << "Quer mudar a quantidade de " << produto <<"??? ";
		escolha = obterEscolha();
		switch (escolha) {
			case 'S': {
				int quantidade{};
				do {
					cout << "Introduza a quantidade de " << produto << ": ";
					cin >> quantidade;
					if (quantidade < 0)
						cout << "Quantidade invalida, tente de novo";
				} while (quantidade < 0);
				return quantidade;
				break;
			}
			case 'N': {
				return -1;
				break;
			}
			default: {
				cout << "Escolha invalida, tente de novo" << endl;
				break;
			}
		}
	} while (escolha != 'S' && escolha != 'N');
}

void imprimirListaCompras(int iogurtes, int ovos, int bananas) {
	cout << "LISTA DE COMPRAS" << endl;
	cout << "Iogurtes: " << iogurtes << endl;
	cout << "Ovos: " << ovos << endl;
	cout << "Bananas: " << bananas << endl;
}

char obterEscolha() {
	char escolha{};
	cin >> escolha;
	return toupper(escolha);
}