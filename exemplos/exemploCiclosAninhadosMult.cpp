#include <iostream>
#include <vector>
using namespace std;

int main()
{
	for (int num_um{1}; num_um <= 10; ++num_um)
	{
		cout << "--- Tabuada do " << num_um << " ---" << endl;
		
		for (int num_dois{1}; num_dois <= 10; ++num_dois)
			cout << num_um << " * " << num_dois << " = " << num_um * num_dois << endl;

		cout << "-----------------" << endl;
	}
}