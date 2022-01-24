#include <iostream>

#include <vector>

#include <cstring>
#include <cctype>

#include <iomanip>
#include <string>

using namespace std;

void imprimirListaCompras(int iogurtes = 8, int ovos = 12, int bananas = 6);

int main() {
	imprimirListaCompras();
	imprimirListaCompras(6);
	imprimirListaCompras(10, 6);
	imprimirListaCompras(1, 2, 3);
}

void imprimirListaCompras(int iogurtes, int ovos, int bananas) {
	cout << "LISTA DE COMPRAS" << endl;
	cout << "Iogurtes: " << iogurtes << endl;
	cout << "Ovos: " << ovos << endl;
	cout << "Bananas: " << bananas << endl;
}