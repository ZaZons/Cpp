#include <iostream>

using namespace std;

int main()
{
	int nota{};

	cout << "Introduza a nota do exame (0-100): ";
	cin >> nota;
	
	char letraNota{};

	if (nota >= 0 && nota <= 100)
	{
		if (nota >= 90) letraNota = 'A';
		else if (nota >= 80) letraNota = 'B';
		else if (nota >= 70) letraNota = 'C';
		else if (nota >= 60) letraNota = 'D';
		else if (nota >= 50) letraNota = 'E';
		else letraNota = 'F';

		cout << "A sua nota foi: " << letraNota << endl;

		if (letraNota == 'F') cout << "Perdao, mas tera de repetir a disciplina" << endl;
		else cout << "Parabens!!!" << endl;
	}
	else 
	{
		cout << "Perda, mas a nota " << nota << " nao e valida" << endl;
	}
}