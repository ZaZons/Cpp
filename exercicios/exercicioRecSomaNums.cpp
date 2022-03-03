#include <iostream>

using namespace std;

void calc(int);

int main() {
	int x{};
	
	cout << "Insira um numero: ";
	cin >> x;

	calc(x);
}

void calc(int x) {
	static int res{};
	res += x;
	cout << x << " ";

	if(x > 1) {
		cout << "+ ";
		calc(x - 1);
	} else {
		cout << "= " << res;
	}
}