#include <iostream>

using namespace std;

int main()
{
	int a{3};

	int b{5};

	int c{7};
	cout << (b == 5);
	cout << (c == (a + b) - 1);
	cout << (b > 5);
	cout << (a >= 3);
	cout << (c <= (a * b) / a);
	cout << ((a + b) == c++);
}