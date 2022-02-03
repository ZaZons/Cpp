#include <iostream>

using namespace std;

int getMax(int, int, int);
int getMin(int, int, int);

int main() {
	int x{}, y{}, z{};
	
	cout << "Introduza 3 numeros inteiros separados por espacos: ";
	cin >> x >> y >> z;

	int max{}, min{};
	max = getMax(x, y, z);
	min = getMin(x, y, z);

	cout << "Max = " << max << endl;
	cout << "Min = " << min;
}

int getMax(int x, int y, int z) {
	int max{};

	if(x > y && x > z) max = x;
	else if(y > x && y > z) max = y;
	else if(z > x && z > y) max = z;

	return max;
}

int getMin(int x, int y, int z) {
	int min{};

	if(x < y && x < z) min = x;
	else if(y < x && y < z) min = y;
	else if(z < x && z < y) min = z;

	return min;
}