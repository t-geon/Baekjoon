#include<iostream>
using namespace std;

int main() {
	int c, max = -1000000, min = 1000000;
	cin >> c;

	int *n=new int[c];
	for (int i = 0; i < c; i++) {
		cin >> n[i];
	}

	for (int i = 0; i < c; i++) {
		if (n[i] > max) { max = n[i]; }
		if (n[i] < min) { min = n[i]; }
	}
	cout << min << " " << max;

	return 0;
}