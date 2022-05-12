#include<iostream>
using namespace std;

int main() {
	int num, result=1;
	int c[10] = {0,};

	for (int i = 0; i < 3; i++) {
		cin >> num;
		result *= num;
	}

	while (result > 0) {
		c[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << c[i] << "\n";
	}

	return 0;
}