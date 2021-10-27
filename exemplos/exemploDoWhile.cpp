#include <iostream>

using namespace std;

int main()
{
	char selecao{};

	do
	{
		cout << "\n----------------------------------" << endl;
		cout << "1. Faz isto" << endl;
		cout << "2. Faz aquilo" << endl;
		cout << "3. Faz outra coisa" << endl;
		cout << "S. Sair" << endl;
		cout << "\nIntroduza a sua escolha: ";
		cin >> selecao;

		if (selecao == '1') cout << "Escolheu 1 - a fazer isto" << endl;
		else if (selecao == '2') cout << "Escolheu 2 - a fazer aquilo" << endl;
		else if (selecao == '3') cout << "Escolheu 3 - a fazer outra coisa" << endl;
		else if (selecao == 'S') cout << "Adeus..." << endl;
		else cout << "Opcao desconhecida, tente de novo..." << endl;
	} while (selecao != 's' && selecao != 'S');
}