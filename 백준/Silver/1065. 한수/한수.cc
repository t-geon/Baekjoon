#include<iostream>
using namespace std;

int d(int num) {
	int a[4] = { 0, };
	int c = 0;

	for (; num > 0;c++) {
		a[c] = num % 10;
		num /= 10;
	}

	if (c <= 2) { return 1; }	//1자리 수면 한수

	int temp = a[0] - a[1];	//1자리 2자리의 차
	for (int i = 1; i < c-1; i++) {
		if (temp != a[i] - a[i + 1]) { return 0; }
	}
	return 1;
};

int main() {
	int num, c=0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		c += d(i);
	}
	cout << c;

	return 0;
}