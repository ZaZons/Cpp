#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int notas[] {13, 19, 15};

	for (auto nota : notas)
		cout << nota << endl;	

	vector<double> temperaturas{23.6, 25.0, 24.9, 22.3};
	
	double tempMedia{};
	double total{};

	for (auto temp : temperaturas)
		total += temp;

	if (temperaturas.size() != 0)
		tempMedia = total / temperaturas.size();

	cout << fixed << setprecision(1);
	cout << "A temperatura media e " << tempMedia << endl;

	for (auto val : {1, 2, 3, 4, 5})
		cout << val << endl;

	for (auto c : "Isto e um teste")
		if (c != ' ')
			cout << c;

	for (auto c : "Isto e um teste")
		if (c == ' ')
			cout << "\t";
		else 
			cout << c;
}