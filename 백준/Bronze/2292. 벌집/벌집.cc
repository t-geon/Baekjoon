#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	int i = 0;
	if (a == 1) { cout << 1; return 0; }
	while (a > 1) {
		i++;
		a = a - (6 * (i-1));
	}

	cout << i;

	return 0;
}