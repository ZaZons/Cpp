#include <iostream>

using namespace std;

void mostrarMenu();
void mostrarCabecalho();
void mostrarAluno();



int main() {
	const size_t numAlunos{5}, numColunas{5}; 
	//campos:  ID do aluno, nota do Teste1, nota do Teste2, nota do período e nota final
	int alunos[numAlunos][numColunas]
		{
			{1232, 32, 34, 43, 43},
			{2345, 34, 34, 54, 35},
			{3432, 45, 54, 56, 34},
			{3456, 56, 34, 34, 56}
		};

	mostrarMenu();
}

void mostrarMenu() {
	cout << "========================================" << endl;
	cout << "                  MENU" << endl;
	cout << "========================================" << endl;
	
	cout << "1.Ver os registos de todos os alunos" << endl;
	cout << "2.Ver o registo de um aluno utilizando o ID" << endl;
	cout << "3.Mostrar as notas mais elevadas e mais baixas" << endl;
	cout << "0.Sair" << endl;

	cout << "Introduza a sua escolha (0-3): "
}
