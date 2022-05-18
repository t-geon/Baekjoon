#include<iostream>
using namespace std;

void fac(int a, int* result) {
	if (a > 1) { 
		(*result)*= a;
		fac(a-1, result);
	}
}

int main() {
	int num;
	cin >> num;

	int result = 1;

	fac(num, &result);

	cout << result;

	return 0;
}