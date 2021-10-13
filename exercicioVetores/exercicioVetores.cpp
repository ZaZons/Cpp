#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vetInteiros{10, 20, 30, 40, 50};

	vetInteiros[0] = 250;
	vetInteiros.at(4) = 500;
}