#include<iostream>
using namespace std;

int fac(int a) {
	if (a <= 1) { return 1; }
	return fac(a - 1)*a;
}

int main() {
	int num;
	cin >> num;

	cout << fac(num);

	return 0;
}