#include <algorithm>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void apresentarMenuPrincipal();
void apresentarMenuMonitores(bool &is21Selected, bool &is24Selected);
void apresentarMenuPerifericos(bool &isPrinterSelected, bool &isWebcamSelected, bool &isScannerSelected);
void apresentarCustoTotal(const bool &is21Selected, const bool &is24Selected, const bool &isPrinterSelected, const bool &isWebcamSelected, const bool &isScannerSelected);
int escolherOpcoes(int minimo, int maximo);
bool swapEscolha(bool &swap);

const double custoMonitor21{100};
const double custoMonitor24{220};
const double custoImpressora{50};
const double custoWebCam{30};
const double custoScanner{80};
const double taxaIVA{0.23};

int main() {

	bool test{true};
	bool test1{false};

	//apresentarMenuMonitores(test1, test1);
	//apresentarMenuPerifericos(test, test, test);
}

void apresentarMenuPrincipal() {
	cout << "1 - Escolher monitor" << endl;
	cout << "2 - Escolher perifericos" << endl;
	cout << "3 - Mostrar custo total" << endl;
	cout << "0 - Sair" << endl;
	cout << "Escolha a opcao: ";
}

void apresentarMenuMonitores(bool &is21Selected, bool &is24Selected) {
	if(is24Selected) {
		cout << "[x] 2 - Eliminar monitor LED 24.0\"";
	} else {
		if (is21Selected) {
			cout << "[x] 1 - Eliminar monitor LED 21.0\"";
		} else {
			cout << "[ ] 1 - Escolher monitor LED 21.0\"";
			cout << endl;
			cout << "[ ] 2 - Escolher monitor LED 24.0\"";
		}
	}

	cout << endl;

	cout << "    0 - Regressar ao menu anterior" << endl;
	cout << "Escolha a opcao: ";
}

void apresentarMenuPerifericos(bool &isPrinterSelected, bool &isWebcamSelected, bool &isScannerSelected) {
	if (isPrinterSelected)
		cout << "[x] 1 - Eliminar impressora";
	else
		cout << "[ ] 1 - Escolher impressora";

	cout << endl;

	if (isWebcamSelected)
		cout << "[x] 2 - Eliminar WebCam";
	else
		cout << "[ ] 2 - Escolher WebCam";

	cout << endl;

	if (isScannerSelected)
		cout << "[x] 3 - Eliminar Scanner";
	else
		cout << "[ ] 3 - Escolher Scanner";

	cout << endl;

	cout << "    0 - Regressar ao menu anterior" << endl;
	cout << "Escolha a opcao: ";
}

void apresentarCustoTotal(const bool &is21Selected, const bool &is24Selected, const bool &isPrinterSelected, const bool &isWebcamSelected, const bool &isScannerSelected) {
	double custoBase{};
	double custoTotal{};

	cout << "Introduza o custo base do sistema: ";
	cin >> custoBase;

	custoTotal += custoBase;

	if(is21Selected)
		custoTotal += custoMonitor21;
	else if(is24Selected)
		custoTotal += custoMonitor24;

	if(isPrinterSelected) custoTotal += custoImpressora;
	if(isWebcamSelected) custoTotal += custoWebCam;
	if(isScannerSelected) custoTotal += custoScanner;

	double iva{custoTotal * taxaIVA};
	double custoFinal{custoFinal + iva};

	cout << "-----------------------------------------------------";
	cout << "Custo total antes de impostos: " << custoTotal;
	cout << "                          iva: "
}

