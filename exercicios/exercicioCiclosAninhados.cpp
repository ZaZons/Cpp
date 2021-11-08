#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec{1, 2, 3};
	int resultado{0};

	if (vec.size() <= 1) resultado = 0;
	else
	{
		for (int i{0}; i < vec.size(); ++i)
		{
			for (size_t j{i + 1}; j < vec.size(); ++j)
			{
				cout << "(" << vec.at(i) << " * " << vec.at(j) << ")" << endl;
				resultado = resultado + vec.at(i) * vec.at(j);
			}
		}
	}
	cout << "Resulado: " << resultado << endl;
	
}