#include <iostream>

#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string msg{},
		before{},
		after{};

	cout << "Introduza a palavra: ";
	cin >> msg;

	for(char c : msg)
	{
		string spaces(msg.length() - 1 - before.length(), ' ');
		cout << spaces << before << c << after << endl;
		
		before += c;
		after = c + after;
	}
}