#include <iostream>

using namespace std;

int main()
{
	int idade;
	double salarioHora = 23.50;
	string nome;

	cout << "Introduza o nome e a idade do colaborador: ";
	cin >> nome >> idade;

	cout << "O colaborador chama-se " << nome << " e tem " << idade << " anos" << " e um salario de " << salarioHora;
}