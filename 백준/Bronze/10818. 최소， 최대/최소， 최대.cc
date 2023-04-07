#include<iostream>
using namespace std;

int main() {
	int c, max = -1000001, min = 1000001;
	cin >> c;

	int num = 0;
	for (int i = 0; i < c; i++) {
		cin >> num;
		if (num > max) { max = num; }
		if (num < min) { min = num; }
	}

	cout << min << " " << max;

	return 0;
}