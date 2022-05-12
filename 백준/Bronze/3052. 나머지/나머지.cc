#include<iostream>
using namespace std;

int main() {
	int c[10] = { 0, }, n[42] = { 0, }, count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> c[i];
		n[c[i] % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (n[i] > 0) { count++; }
	}
	cout << count;

	return 0;
}