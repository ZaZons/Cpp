#include <iostream>

using namespace std;

int main()
{
	int soma{};

	for (int i = 1; i <= 15; ++i)
	{
		if (i % 2 != 0)
			soma += i;
	}
	cout << soma;
}