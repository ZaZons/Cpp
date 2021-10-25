#include <iostream>

using namespace std;

int main()
{
	string diaSemana{};
	int dia{};

	cout << "Introduza um numero entre 0 (domingo) e 6 (sabado), para lhe dizer o dia da semana: ";
	cin >> dia;

	switch (dia)
	{
		case 0:
			diaSemana = "domingo";
			cout << "O dia da semana a que corresponde o numero " << dia << " e " << diaSemana << endl;

		case 1:
			diaSemana = "segunda-feira";
			cout << "O dia da semana a que corresponde o numero " << dia << " e " << diaSemana << endl;
			
		case 2:
			diaSemana = "terca-feira";
			cout << "O dia da semana a que corresponde o numero " << dia << " e " << diaSemana << endl;

		case 3:
			diaSemana = "quarta-feira";
			cout << "O dia da semana a que corresponde o numero " << dia << " e " << diaSemana << endl;

		case 4:
			diaSemana = "quinta-feira";
			cout << "O dia da semana a que corresponde o numero " << dia << " e " << diaSemana << endl;

		case 5:
			diaSemana = "sexta-feira";
			cout << "O dia da semana a que corresponde o numero " << dia << " e " << diaSemana << endl;

		case 6:
			diaSemana = "sabado";
			cout << "O dia da semana a que corresponde o numero " << dia << " e " << diaSemana << endl;

		default:
			cout << "Erro - codigo de dia invalido" << endl;
	}
}