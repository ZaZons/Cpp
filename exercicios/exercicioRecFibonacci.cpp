#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
	fibonacci(0);
}

int fibonacci(int x) {
	if(x <= 1) return x;
	cout << x << ", ";
	return (fibonacci(x - 1) + fibonacci(x - 2));
}
