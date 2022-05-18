#include<iostream>
using namespace std;

int p(int a) {
	if (a <= 1) {
		return a;
	}
	return p(a - 2) + p(a - 1);
}

int main() {
	int num;
	cin >> num;

	cout << p(num);

	return 0;
}