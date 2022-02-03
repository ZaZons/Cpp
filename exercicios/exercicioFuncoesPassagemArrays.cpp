#include <iostream>
#include <string>

using namespace std;

void limparListaConvidados(string[], size_t);
void mostrarListaConvidados(const string[], size_t);

int main() {
	string listaConvidados[]{"Bo", "Luke", "Daisy"};
	size_t tamanhoListaConvidados{3};

	mostrarListaConvidados(listaConvidados, tamanhoListaConvidados);
	limparListaConvidados(listaConvidados, tamanhoListaConvidados);
	mostrarListaConvidados(listaConvidados, tamanhoListaConvidados);
}

void mostrarListaConvidados(const string listaConvidados[], size_t tamanhoListaConvidados) {
	for(size_t i{0}; i < tamanhoListaConvidados; ++i) 
		cout << listaConvidados[i] << endl;
}

void limparListaConvidados(string listaConvidados[], size_t tamanhoListaConvidados) {
	for(size_t i{0}; i < tamanhoListaConvidados; ++i) 
		listaConvidados[i] = "";
}