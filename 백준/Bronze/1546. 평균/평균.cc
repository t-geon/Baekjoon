#include<iostream>
using namespace std;

int main() {
	int c, max = 0;
	cin >> c;

	double a[1000], avg = 0;
	for (int i = 0; i < c; i++) {
		cin >> a[i];
		if (a[i] > max) { max = a[i]; }
	}

	for (int i = 0; i < c; i++) {
		a[i] = a[i] / max * 100;
		avg += a[i];
	}
	cout << avg/c;

	return 0;
}