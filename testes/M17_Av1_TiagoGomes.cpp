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
void apresentarCustoTotal(const bool &is21Selected, const bool &is24Selected, const bool &isPrinterSelected, const bool &isWebCamSelected, const bool &isScannerSelected);
int escolherOpcoes(int minimo, int maximo);
bool swapEscolha(bool &swap);

const double custoMonitor21{100};
const double custoMonitor24{220};
const double custoImpressora{50};
const double custoWebCam{30};
const double custoScanner{80};
const double taxaIVA{0.23};

int main() {
	bool is21Selected{false},
		is24Selected{false};

	bool isPrinterSelected{false},
		isWebCamSelected{false},
		isScannerSelected{false};

	int escolhaMenu;

	do {
		apresentarMenuPrincipal();
		escolhaMenu = escolherOpcoes(0, 3);

		switch (escolhaMenu) {
			case 1:
				apresentarMenuMonitores(is21Selected, is24Selected);
				break;
			case 2:
				apresentarMenuPerifericos(isPrinterSelected, isWebCamSelected, isScannerSelected);
				break;
			case 3:
				apresentarCustoTotal(is21Selected, is24Selected, isPrinterSelected, isWebCamSelected, isScannerSelected);
				break;
		}
	} while(escolhaMenu != 0);
}

void apresentarMenuPrincipal() {
	cout << "1 - Escolher monitor" << endl;
	cout << "2 - Escolher perifericos" << endl;
	cout << "3 - Mostrar custo total" << endl;
	cout << "0 - Sair" << endl;
}

void apresentarMenuMonitores(bool &is21Selected, bool &is24Selected) {
	int escolha{};

	do {
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

		escolha = escolherOpcoes(0, 2);
		switch(escolha) {
			case 1:
				is21Selected = swapEscolha(is21Selected);
				break;
			case 2:
				is24Selected = swapEscolha(is24Selected);
				break;
		}
	} while (escolha != 0);
}

void apresentarMenuPerifericos(bool &isPrinterSelected, bool &isWebCamSelected, bool &isScannerSelected) {
	int escolha{};

	do {
		if (isPrinterSelected)
			cout << "[x] 1 - Eliminar impressora";
		else
			cout << "[ ] 1 - Escolher impressora";

		cout << endl;

		if (isWebCamSelected)
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

		escolha = escolherOpcoes(0, 3);
		switch(escolha) {
			case 1:
				isPrinterSelected = swapEscolha(isPrinterSelected);
				break;
			case 2:
				isWebCamSelected = swapEscolha(isWebCamSelected);
				break;
			case 3:
				isScannerSelected = swapEscolha(isScannerSelected);
				break;
		}
	} while(escolha != 0);
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
	double custoFinal{custoTotal + iva};

	cout << "-----------------------------------------------------" << endl;
	cout << " Custo total antes de impostos: " << custoTotal << endl;
	cout << "                           IVA: " << iva << endl;
	cout << "Custo total incluindo impostos: " << custoFinal << endl;
	cout << "-----------------------------------------------------" << endl;
}

int escolherOpcoes(int min, int max) {
	int escolha{};

	cout << "Escolha a opcao: ";
	cin >> escolha;

	if(escolha < min || escolha > max) {
		cout << "Escolha invalida. Tente de novo." << endl;
		escolherOpcoes(min, max);
	} else {
		return escolha;
	}
}

bool swapEscolha(bool &swap) {
	return !swap;
}