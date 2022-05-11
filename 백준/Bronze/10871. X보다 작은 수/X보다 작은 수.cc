#include<iostream>
using namespace std;

int main() {
	int c, n;
	cin >> c >> n;
	int a[10000];

	for (int i = 0; i < c; i++) {
		cin >> a[i];
	}

	for (int j = 0; j < c; j++) {
		if (a[j] < n) { cout << a[j] << " "; }
	}


	return 0;
}
