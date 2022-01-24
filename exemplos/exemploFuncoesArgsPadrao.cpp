#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calcCusto(double custoBase = 100, double taxa = .23, double portes = 3.5);
void cumprimento(string nome, string titulo = "Sr.", string sufixo = "");

int main() {
	double cost{0};
	
	cout << fixed << setprecision(2);
	
	cost = calcCusto(100, .16, 5.5);
	cout << "Custo: " << cost << endl;

	cost = calcCusto(100, .16);
	cout << "Custo: " << cost << endl;

	cost = calcCusto(200);
	cout << "Custo: " << cost << endl;

	cost = calcCusto();
	cout << "Custo: " << cost << endl;

	cumprimento("John Watson", "Dr.", "M.D.");
	cumprimento("Henry Jones", "Dr.", "Arqueologo");
	cumprimento("Pedro Crispim", "Eng.");
	cumprimento("Albert Einstein");
	cumprimento("Marie Curie", "Sr.ta", "Doutorada");
}

double calcCusto(double custoBase, double taxa, double portes) {
	return custoBase += (custoBase * taxa) + portes;
}

void cumprimento(string nome, string titulo, string sufixo) {
	cout << "Ola " << titulo + " " + nome + " " + sufixo << endl;
}
