#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
	int x{};
	
	cout << "Introduza o nivel da sequencia de Fibonacci: ";
	cin >> x;

	for(int i{0}; i < x; ++i) {
		cout << fibonacci(i) << " ";
	}
}

int fibonacci(int x) {
	static int res{};
	
	if(x == 0) {
		return 0;
	} else if(x == 1) {
		return 1;
	} else {
		res = fibonacci(x - 1) + fibonacci(x - 2);
		return res;
	}
}
