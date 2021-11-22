#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string nomeCompletoDesformatado{"FernandoPessoa"}, 
		primeiroNome{nomeCompletoDesformatado, 0, 8}, 
		ultimoNome = nomeCompletoDesformatado.substr(8, 6),
		nomeCompletoFormatado = primeiroNome + ultimoNome;

	nomeCompletoFormatado.insert(8, " ");

	cout << "Nome completo formatado: " << nomeCompletoFormatado;
}