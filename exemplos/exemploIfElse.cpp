#include <iostream>

using namespace std;

int main()
{
	int num{};
	const int objetivo{10};

	cout << "Introduza um numero e vou compara-lo com " << objetivo << ": ";
	cin >> num;

	if (num >= objetivo)
	{
		cout << "\n===============================" << endl;
		cout << num << " e maior ou igual a " << objetivo << endl;
		int diff{num - objetivo};
		cout << num << " e maior em " << diff << " do que " << objetivo << endl;
	}
	else
	{
		cout << "\n===============================" << endl;
		cout << num << " e menor do que" << objetivo << endl;
		int diff{objetivo - num};
		cout << num << " e menor em " << diff << " do que " << objetivo << endl;
	}
}