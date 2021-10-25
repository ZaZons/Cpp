#include <iostream>

using namespace std;

int main()
{
	char letraNota{};

	cout << "Introduza a letra da nota que espera obter no exame: ";
	cin >> letraNota;

	switch(letraNota)
	{
		case 'a':
		case 'A':
			cout << "Precisas de ter 90 ou superior, por isso estuda bastante!!!" << endl;
			break;
		
		case 'b':
		case 'B':
			cout << "Para teres um B, precisas de ter entre 80 e 89, por isso toca a estudar!!!" << endl;
			break;

		case 'c':
		case 'C':
			cout << "Precisas de ter entre 70 e 79 para uma nota media" << endl;
			break;

		case 'd':
		case 'D':
			cout << "Hmm, devias ter como objetivo uma nota superior. Assim basta teres entre 60 e 69." << endl;
			break;
		
		case 'e':
		case 'E':
		{
			char confirmar{};

			cout << "Tens a certeza??? (S/N)" << endl;
			cin >> confirmar;

			if (confirmar == 'S' || confirmar == 's')
				cout << "Ok, calculo que nao queres estudar..." << endl;
			else if (confirmar == 'N' || confirmar == 'n')
				cout << "Boa - toca a ir estudar!!!" << endl;
			else
				cout << "Escolha invalida" << endl;

			break;
		}

		default:
			cout << "Perdao, essa nao e uma escolha valida" << endl;
	}
}