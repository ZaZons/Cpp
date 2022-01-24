#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int random{}, min{1}, max{6};
	size_t quantidade{10};

	cout << "RAND_MAX neste sistema e: " << RAND_MAX << endl;
	srand(time(nullptr));

	for (size_t i{0}; i < quantidade; ++i) {
		random = rand() % max + min;
		cout << random << endl;
	}
}