#include <iostream>
#include <limits>

using namespace std;

int main()
{
	/*
	*	Chars
	*/
	char tipoFuncionario = 'P';
	cout << "O tipo de funcionario e: " << tipoFuncionario << endl;

	/*
	*	Ints
	*/
	unsigned short notaTeste = 73;
	cout << "A minha nota no teste foi: " << notaTeste << endl;

	int quantidadeTurmas = 52;
	cout << "A nossa escola tem " << quantidadeTurmas << " turmas, no total." << endl;

	long habitantesPortugal = 10154759;
	cout << "Em outubro de 2019, Portugal tinha " << habitantesPortugal << " habitantes." << endl;

	//long habitantesPlanetaTerra{ 773748300 } // Vai dar erro
	//long habitantesPlanetaTerra = 773748300 // Nao da erro, mas vai ficar com overflow e armazenar um valor negativo

	long long distanciaAlfaCentauri = 41000000000000;
	// long distanciaAlfaCentauri;
	//cout << "Introduza a distancia ate Alfa Centauri (41000000000000)";
	//cin >> distanciaAlfaCentauri;
	cout << "A estrela mais proxima do Sol, Alpha Centauri, encontra-se a " << distanciaAlfaCentauri << " km" << endl;

	/*
	*	Floats
	*/
	float prestacaoCasa = 195.4f;
	cout << "O valor da prestacao da casa e " << prestacaoCasa << endl;

	double PI = 3.1415926535;
	cout << "O valor de PI " << PI << endl;

	long double quantidadeAbsurda = 2.7e120;
	cout << "A quantidade " << quantidadeAbsurda << " e absurda!" << endl;

	/*
	*	Bools
	*/
	bool pontuacaoMaxima = false;
	cout << "A pontuacao maxima foi atingida: " << pontuacaoMaxima << endl;

	/*
	*	Overflow
	*/
	short valorUm = 32767;
	short valorDois = 1;
	short soma = valorUm + valorDois;

	cout << "A soma de " << valorUm << " e " << valorDois << " e " << soma << endl;

	cout << "O limite de um short e entre " << numeric_limits<short>::min() << " e " << numeric_limits<short>::max() << endl;
	cout << "O limite de um int e entre " << numeric_limits<int>::min() << " e " << numeric_limits<int>::max() << endl;
	cout << "O limite de um long e entre " << numeric_limits<long>::min() << " e " << numeric_limits<long>::max() << endl;
	cout << "O limite de um long long e entre " << numeric_limits<long long>::min() << " e " << numeric_limits<long long>::max() << endl;
	cout << "O limite de um float e entre " << numeric_limits<float>::min() << " e " << numeric_limits<float>::max() << endl;
	cout << "O limite de um double e entre " << numeric_limits<double>::min() << " e " << numeric_limits<double>::max() << endl;
}