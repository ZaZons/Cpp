/////////// Teste-Exemplo-11.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include <cctype> // para utilizar toupper()
#include <string>

using namespace std;

// Protótipos para apresentar o menu e obter a escolha do utilizador
void apresentar_menu(bool);
char obter_escolha();

// Protótipos de funções para trabalhar os menus
void trabalhar_apresentacao(const vector<int>& v);
void trabalhar_adicao(vector<int>& v, bool);
void trabalhar_media(const vector<int>& v);
void trabalhar_menor(const vector<int>& v);
void trabalhar_maior(const vector<int>& v);
void trabalhar_procura(const vector<int>& v);
void trabalhar_limpar(vector<int>&);
bool trabalhar_duplicados(vector<int>&, bool);
void trabalhar_saida();
void trabalhar_desconhecido();

// Protótipos para funções que trabalham a lista
// para a poderem apresentar, calcular a média, etc.
void apresentar_lista(const vector<int>& v);
double calcular_media(const vector<int>& v);
int obter_menor(const vector<int>& v);
int obter_maior(const vector<int>& v);
bool procurar(const vector<int>& v, int target);

int main()
{
	bool areDuplicadosAllowed = false;
	vector<int> numeros{};
	char escolha{};

	do {
		apresentar_menu(areDuplicadosAllowed);
		escolha = obter_escolha();

		switch (escolha) {
		case 'V': trabalhar_apresentacao(numeros);
			break;
		case 'A': trabalhar_adicao(numeros, areDuplicadosAllowed);
			break;
		case 'M': trabalhar_media(numeros);
			break;
		case 'P': trabalhar_menor(numeros);
			break;
		case 'G': trabalhar_maior(numeros);
			break;
		case 'E': trabalhar_procura(numeros);
			break;
		case 'L':
			trabalhar_limpar(numeros);
			break;
		case 'D':
			areDuplicadosAllowed = trabalhar_duplicados(numeros, areDuplicadosAllowed);
			break;
		case 'S': 
			trabalhar_saida();
			break;
		default: trabalhar_desconhecido();
		}
	} while (escolha != 'S');

	cout << endl;
	return 0;
}

/***************************************************************
Esta função apresenta o menu na consola.
***************************************************************/
void apresentar_menu(bool areDuplicadosAllowed) {
	string duplicados;
	if (areDuplicadosAllowed) duplicados = "(neste momento sao permitidos duplicados)";
	else duplicados = "(neste momento nao sao permitidos duplicados)";

	cout << "\nV - Visualizar os numeros" << endl;
	cout << "A - Adicionar um numero" << endl;
	cout << "M - Media dos numeros" << endl;
	cout << "P - Pequeno - mostrar o menor numero" << endl;
	cout << "G - Grande - mostrar o maior numero" << endl;
	cout << "E - Encontrar um numero" << endl;
	cout << "L - Limpar a lista" << endl;
	cout << "D - Duplicados " << duplicados << endl;
	cout << "S - Sair" << endl;
	cout << "\nIntroduza a sua escolha: ";
}

/***************************************************************
Esta função apenas lê um caracter de stdin
e devolve-o em maiúsculas.
***************************************************************/
char obter_escolha() {
	char selecao{};
	cin >> selecao;
	return toupper(selecao);
}

/***************************************************************
Esta função é chamada quando o utilizador escolhe a opção de
mostrar a lista, a partir do menu principal.

Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
***************************************************************/
void trabalhar_apresentacao(const vector<int>& v) {
	if (v.size() == 0)
		cout << "[] - a lista esta vazia" << endl;
	else
		apresentar_lista(v);
}

/***************************************************************
Esta função é chamada quando o utilizador seleciona adicionar
um número à lista, a partir do menu principal

Nota: o parâmetro não poderá ser uma referência constante
pois irá ser necessário alterar a lista dos números
***************************************************************/
void trabalhar_adicao(vector<int> &v, bool areDuplicadosAllowed)
{
	int num_a_adicionar{};
	cout << "Introduza um numero inteiro para adicionar a lista: ";
	cin >> num_a_adicionar;
	if(!areDuplicadosAllowed) {
		if(procurar(v, num_a_adicionar)){
			cout << num_a_adicionar << " nao foi adicionado a lista porque ja existe" << endl;
		} else {	
			v.push_back(num_a_adicionar);
			cout << num_a_adicionar << " adicionado a lista." << endl;
		}
	} else {
		v.push_back(num_a_adicionar);
		cout << num_a_adicionar << " adicionado a lista." << endl;
	}
}

/***************************************************************
Esta função é chamada quando o utilizador seleciona calcular
a média, a partir do menu principal

Nota: o parâmetro não poderá ser uma referência constante
pois irá ser necessário alterar a lista dos números
***************************************************************/
void trabalhar_media(const vector<int>& v) {
	if (v.size() == 0)
		cout << "Nao foi possivel calcular a media - nao existem dados" << endl;
	else
		cout << "A media e: " << calcular_media(v) << endl;
}

/***************************************************************
Esta função é chamada quando o utilizador seleciona mostrar
o menor número da lista, a partir do menu principal

Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
***************************************************************/
void trabalhar_menor(const vector<int>& v) {
	if (v.size() == 0)
		cout << "Nao foi possivel encontrar o menor valor - a lista esta vazia" << endl;
	else
		cout << "O menor numero e: " << obter_menor(v) << endl;
}

/***************************************************************
Esta função é chamada quando o utilizador seleciona mostrar
o maior número da lista, a partir do menu principal

Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
***************************************************************/
void trabalhar_maior(const vector<int>& v) {
	if (v.size() == 0)
		cout << "Nao foi possivel encontrar o maior valor - a lista esta vazia" << endl;
	else
		cout << "O maior numero e: " << obter_maior(v) << endl;
}

/***************************************************************
Esta função é chamada quando o utilizador seleciona a opção
para encontrar um número na lista, a partir do menu principal

Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
***************************************************************/
void trabalhar_procura(const vector<int>& v) {
	int valor_a_procurar{};
	cout << "Introduza o numero a encontrar: ";
	cin >> valor_a_procurar;
	if (procurar(v, valor_a_procurar))
		cout << valor_a_procurar << " foi encontrado" << endl;
	else
		cout << valor_a_procurar << " nao foi encontrado" << endl;
}

void trabalhar_limpar(vector<int>& v) {
	char confirm;
	cout << "Tem a certeza de que pretende apagar a lista? (S/N)" << endl;
	cin >> confirm;
	confirm = toupper(confirm);
	if(confirm == 'S') {
		v.clear();
		cout << "A lista foi limpa e encontra-se agora vazia" << endl;
	} else if(confirm == 'N') {
		cout << "A lista nao foi alterada" << endl;
	}
}

bool trabalhar_duplicados(vector<int>& v, bool allowed) {
	char confirm;
	if(v.size() > 0) {
		cout << "Atencao que esta opcao ira limpar a lista" << endl;
		cout << "Tem a certeza de que pretende alterar o modo e limpar a lista? (S/N)" << endl;
		cin >> confirm;
		confirm = toupper(confirm);
		if (confirm == 'S')
		{
			v.clear();
			cout << "A lista foi limpa e encontra-se agora vazia" << endl;
		}
		else if (confirm == 'N')
		{
			cout << "A lista nao foi alterada" << endl;
			return allowed;
		}
	}
	allowed = !allowed;
	return allowed;
}

/***************************************************************
Esta função é chamada quando o utilizador seleciona a opção
de sair do programa, a partir do menu principal
***************************************************************/
void trabalhar_saida() {
	cout << "Adeus" << endl;
}

/***************************************************************
Esta função é chamada quando o utilizador seleciona uma opção
que não consta da lista, a partir do menu principal, ou seja,
não sabemos lidar com essa opção
***************************************************************/
void trabalhar_desconhecido() {
	cout << "Selecao invalida - tente novamente" << endl;
}

/***************************************************************
Esta função espera receber uma lista de inteiros na forma de
um vetor, e apresenta todos esses valores inteiros numa lista
delimitada por chavetas
Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
***************************************************************/
void apresentar_lista(const vector<int>& v) {
	cout << "[ ";
	for (auto num : v)
		cout << num << " ";
	cout << "]" << endl;
}

/***************************************************************
Esta função espera receber uma lista de inteiros na forma de
um vetor, e calcula e devolve a média
Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
Nota: A lista não pode estar vazia
***************************************************************/
double calcular_media(const vector<int>& v) {
	int total{};
	for (auto num : v)
		total += num;
	return static_cast<double>(total) / v.size();
}

/***************************************************************
Esta função espera receber uma lista de inteiros na forma de
um vetor, e encontra e devolve o maior número nela contido
Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
Nota: A lista não pode estar vazia
***************************************************************/
int obter_maior(const vector<int>& v) {
	int largest = v.at(0);
	for (auto num : v)
		if (num > largest)
			largest = num;
	return largest;
}

/***************************************************************
Esta função espera receber uma lista de inteiros na forma de
um vetor, e encontra e devolve o maior número nela contido
Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
Nota: A lista não pode estar vazia
***************************************************************/
int obter_menor(const vector<int>& v) {
	int smallest = v.at(0);
	for (auto num : v)
		if (num < smallest)
			smallest = num;
	return smallest;
}

/***************************************************************
Esta função espera receber uma lista de inteiros na forma de
um vetor, bem como um valor inteiro, e tenta encontrar
esse valor inteiro na lista

Se o valor inteiro for encontrado no vetor, o valor true é devolvido
Se o valor inteiro não for encontrado no vetor, o valor false é devolvido

Nota: o parâmetro é uma referência constante, por isso esta
função NÃO deve tentar modificar a lista dos números
***************************************************************/
bool procurar(const vector<int>& v, int target) {
	for (auto num : v)
		if (num == target)
			return true;
	return false;
}

