#include <iostream>

using namespace std;

int main()
{
	const int inferior{10};
	const int superior{20};
	int numero{};

	cout << boolalpha;

	cout << "Introduza um numero inteiro - os limites sao " << inferior << " e " << superior << ": " << endl;

	cin >> numero;

	bool entreLimites{false};

	entreLimites = (numero > inferior && numero < superior);

	cout << numero << " esta entre " << inferior << " e " << superior << ": " << entreLimites << endl;

	cout << "\nIntroduza um numero inteiro - os limites sao " << inferior << " e " << superior << ": " << endl;

	cin >> numero;

	bool foraLimites{false};

	foraLimites = (numero > inferior || numero < superior);

	cout << numero << " esta fora de " << inferior << " e " << superior << ": " << foraLimites << endl;

	cout << "Introduza um numero inteiro - os limites sao " << inferior << " e " << superior << ": " << endl;

	cin >> numero;

	bool nosLimites{false};

	nosLimites = (numero > inferior || numero < superior);

	cout << numero << " esta num dos limites que sao " << inferior << " e " << superior << ": " << nosLimites << endl;

	const int velocidadeVendoParaCasaco{40};
	const double temperaturaParaCasaco{14};
	bool utilizarCasaco{false};
	double temperatura{};
	int velocidadeVento{};

	cout << "\nIntroduza a temperatura atual em (C): ";
	cin >> temperatura;

	cout << "\nIntroduza a velocidade do vento (kph): ";
	cin >> velocidadeVento;

	utilizarCasaco = (temperatura < temperaturaParaCasaco || velocidadeVento > velocidadeVendoParaCasaco);

	cout << "Precisa de utilizar um casaco? (OR)" << utilizarCasaco << endl;

	cout << "\nIntroduza a temperatura atual em (C): ";
	cin >> temperatura;

	cout << "\nIntroduza a velocidade do vento (kph): ";
	cin >> velocidadeVento;

	utilizarCasaco = (temperatura < temperaturaParaCasaco && velocidadeVento > velocidadeVendoParaCasaco);

	cout << "Precisa de utilizar um casaco? (AND)" << utilizarCasaco << endl;
}