#include <iostream>

using namespace std;

void mostrarArray(const int arr[], size_t tamanho);
void definirArray(int arr[], size_t tamanho, int valor);

int main() {
	int minhasNotas[]{20, 19, 18, 17, 16},
		numElemArray = sizeof(minhasNotas) / sizeof(int);

	mostrarArray(minhasNotas, 5);
	definirArray(minhasNotas, 5, 20);
	mostrarArray(minhasNotas, 5);
}

void mostrarArray(const int arr[], size_t tamanho) {
	for(size_t i{0}; i < tamanho; ++i) cout << arr[i] << " ";
	cout << endl;
	//arr[0] = 5000; 
}

void definirArray(int arr[], size_t tamanho, int valor) {
	for(size_t i{0}; i < tamanho; ++i) arr[i] = valor;
}
