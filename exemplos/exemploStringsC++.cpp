#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string s0;
	string s1{"Pera"};
	string s2{"Banana"};
	string s3{"Kiwi"};
	string s4{"pera"};
	string s5{s1};
	string s6{s1, 0, 3};
	string s7(10, 'X');

	cout << s0 << endl;
	cout << s0.length() << endl;

	cout << "\nInicializacao" << "\n---------------------------------------------" << endl;

	cout << "s1 foi inicializada a: " << s1 << endl;
	cout << "s2 foi inicializada a: " << s2 << endl;
	cout << "s3 foi inicializada a: " << s3 << endl;
	cout << "s4 foi inicializada a: " << s4 << endl;
	cout << "s5 foi inicializada a: " << s5 << endl;
	cout << "s6 foi inicializada a: " << s6 << endl;
	cout << "s7 foi inicializada a: " << s7 << endl;
	
	cout << "\nComparacao" << "\n---------------------------------------------" << endl;

	cout << boolalpha;

	cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
	cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
	cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
	cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
	cout << s1 << " > " << s1 << ": " << (s1 > s1) << endl;
	cout << s1 << " < " << s5 << ": " << (s1 < s5) << endl;
	cout << s1 << " == " << "Pera" << ": " << (s1 == "Pera") << endl;

	cout << "\nAtribuicao" << "\n---------------------------------------------" << endl;

	s1 = "Melancia";
	cout << "s1 passou a ser: " << s1 << endl;

	s2 = s1;
	cout << "s2 passou a ser: " << s2 << endl;

	s3 = "Pedro";
	cout << "s3 passou a ser: " << s3 << endl;

	s3[0] = 'C';
	cout << "s3 alterou a primeira letra para 'C': " << s3 << endl;

	s3.at(0) = 'V';
	cout << "s3 alterou a primeira letra para 'V': " << s3 << endl;
	
	cout << "\nConcatenacao" << "\n---------------------------------------------" << endl;

	s3 = "Sumo de " + s5 + " e " + s2;
	cout << "s3 passou a ser: " << s3 << endl;

	cout << "\nCiclo" << "\n---------------------------------------------" << endl;

	s1 = "Pera";

	for(size_t i{0}; i < s1.length(); ++i)
	{
		cout << s1.at(i);
	}
	cout << endl;

	for (char c: s1)
	{
		cout << c;
	}
	cout << endl;
	
	cout << "\nSubstring" << "\n---------------------------------------------" << endl;

	s1 = "Isto ou aquilo";

	cout << s1.substr(0, 4) << endl;
	cout << s1.substr(5, 2) << endl;
	cout << s1.substr(8, 6) << endl;

	cout << "\nApagar" << "\n---------------------------------------------" << endl;

	s1 = "Isto ou aquilo";
	s1.erase(0, 5);

	cout << "s1 passou a ser: " << s1 << endl;

	cout << "\ngetline" << "\n---------------------------------------------" << endl;

	string nomeCompleto{};

	cout << "Introduza o nome completo: ";
	getline(cin, nomeCompleto);

	cout << "O seu nome completo e: " << nomeCompleto << endl;

	cout << "\nfind" << "\n---------------------------------------------" << endl;

	s1 = "A palavra secreta e XPTO";
	
	string palavra{};
	
	cout << "Introduzir a palavra a pesquisar: ";
	cin >> palavra;

	size_t position = s1.find(palavra);

	if (position != string::npos)
	{
		cout << "Encontrada a palavra " << palavra << " na posicao: " << position << endl;
	}
	else
	{
		cout << "A palavra " << palavra << " nao foi encontrada" << endl;
	}
}