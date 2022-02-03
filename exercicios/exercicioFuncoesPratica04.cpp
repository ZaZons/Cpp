#include <iostream>

using namespace std;

void mostrarMenu();
void mostrarCabecalho();
void mostrarTodosAlunos(const int*, const int, const int);
void mostrarAlunoPorId(int);

int main() {
	const size_t numAlunos{4}, numColunas{5}; 
	//campos:  ID do aluno, nota do Teste1, nota do Teste2, nota do período e nota final
	int resposta{};
	int alunos[numAlunos][numColunas]
		{
			{1232, 32, 34, 43, 43},
			{2345, 34, 34, 54, 35},
			{3432, 45, 54, 56, 34},
			{3456, 56, 34, 34, 56}
		};


	do {
		mostrarMenu();
		
		cin >> resposta;
		switch(resposta) {
			case 1:
				mostrarTodosAlunos(alunos[0], numAlunos, numColunas);
				break;
			case 2:
				int id{};
				cout << "Por favor, introduza o ID do aluno: ";
				cin >> id;
				mostrarAlunoPorId(id);
				break;
		}
	} while(resposta != 0);
}

void mostrarMenu() {
	cout << "========================================" << endl;
	cout << "                  MENU" << endl;
	cout << "========================================" << endl;
	
	cout << "1.Ver os registos de todos os alunos" << endl;
	cout << "2.Ver o registo de um aluno utilizando o ID" << endl;
	cout << "3.Mostrar as notas mais elevadas e mais baixas" << endl;
	cout << "0.Sair" << endl;

	cout << "Introduza a sua escolha (0-3): ";
}

void mostrarTodosAlunos(const int *alunos, const int nl, const int nc) {
	mostrarCabecalho();	
	for(size_t linhas = 0; linhas < nl; ++linhas) {
		for(size_t colunas = 0; colunas < nc; ++colunas) {
			cout << alunos[linhas * (nc) + colunas] << " \t\t  ";
		}
		cout << endl;
	}
}

void mostrarAlunoPorId(const int id) {
	mostrarCabecalho();
}

void mostrarCabecalho() {
	cout << "=======================================================================" << endl;
	cout << "ID Aluno";
	cout << "\tTeste1";
	cout << "\t\tTeste2"; 
	cout << "\t\tPeriodo";
	cout << "\t\tFinal" << endl;
	cout << "=======================================================================" << endl;
}
