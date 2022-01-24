#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double num;

	cout << "Introduza um numero (double): ";
	cin >> num;

	cout << "A raiz quadrada de " << num << " e: " << sqrt(num) << endl;
	cout << "A raiz cubica de " << num << " e: " << cbrt(num) << endl;

	cout << "O seno de " << num << " e: " << sin(num) << endl;
	cout << "O coseno de " << num << " e: " << cos(num) << endl;

	cout << "O teto (valor inteiro acima) de " << num << " e: " << ceil(num) << endl;
	cout << "O chao (valor inteiro abaixo) de " << num << " e: " << floor(num) << endl;

	cout << "O numero " << num << " arredondado fica: " << round(num) << endl;

	double power{};
	cout << "\nIntroduza a potencia para utilizar com a base " << num << ": ";
	cin >> power;
	cout << num << " elevado a pontencia " << power << " e: " << pow(num, power) << endl;
}